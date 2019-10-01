#include "cShaderLoader.h"


#include "GLCommon.h"	// For all the OpenGL calls, etc.

#include <fstream>
#include <sstream>		// "string stream"
#include <iostream>
#include <vector>

#include <algorithm>		// for the std::copy
#include <iterator>			// for the back_inserter

cShaderLoader::cShaderLoader()
{

}

cShaderLoader::~cShaderLoader()
{

}

// Returns bool if didn't load
bool cShaderLoader::LoadSourceFromFile(cItem_Shader& shader)
{
	std::string fullFileName = shader.GetRelativeName();

	std::ifstream theFile(fullFileName.c_str());
	if (!theFile.is_open())
	{
		return false;
	}

	shader.m_vecSource.clear();

	const int size = 1024;
	char pLineTemp[size] = { 0 };
	while (theFile.getline(pLineTemp, size))
	{
		std::string tempString(pLineTemp);
		shader.m_vecSource.push_back(tempString);
	}

	theFile.close();
	return true;		// Return the string (from the sstream)
}


bool cShaderLoader::Load(cItem_Shader& shader)
{
	std::string errorText = "";
	
	unsigned int type = 0;
	// Shader loading happening before vertex buffer array
	switch (shader.m_shaderType)
	{
	case cItem_Shader::vertex:
	{
		type = GL_VERTEX_SHADER;
		break;
	}	
	case cItem_Shader::fragment:
	{
		type = GL_FRAGMENT_SHADER;
		break;
	}
	case cItem_Shader::unknown:
	default:
	{
		std::cout << __FILEW__ << __LINE__ << "Invalid shader type" << std::endl;
		return false;
	}
	}

	shader.m_ID = glCreateShader(type);

	// Load some text from a file...
	if (!LoadSourceFromFile(shader))
	{
		return false;
	}

	errorText = "";
	if (!CompileShaderFromSource(shader, errorText))
	{
		this->m_lastError = errorText;
		return false;
	}

	GetAttributes(shader);
	GetUniforms(shader);

	return true;
}


std::string cShaderLoader::GetLastError()
{
	std::string lastErrorTemp = this->m_lastError;
//	this->m_lastError = "";
	return lastErrorTemp;
}


bool cShaderLoader::CompileShaderFromSource(cItem_Shader& shader, std::string& error)
{
	error = "";

	const unsigned int MAXLINESIZE = 8 * 1024;	// About 8K PER LINE, which seems excessive

	unsigned int numberOfLines = static_cast<unsigned int>(shader.m_vecSource.size());

	// This is an array of pointers to strings. aka the lines of source
	char** arraySource = new char* [numberOfLines];
	// Clear array to all zeros (i.e. '\0' or null terminator)
	memset(arraySource, 0, numberOfLines);

	for (unsigned int indexLine = 0; indexLine != numberOfLines; indexLine++)
	{
		unsigned int numCharacters = (unsigned int)shader.m_vecSource[indexLine].length();
		// Create an array of chars for each line
		arraySource[indexLine] = new char[numCharacters + 2];		// For the '\n' and '\0' at end
		memset(arraySource[indexLine], 0, numCharacters + 2);

		// Copy line of source into array
		for (unsigned int indexChar = 0; indexChar != shader.m_vecSource[indexLine].length(); indexChar++)
		{
			arraySource[indexLine][indexChar] = shader.m_vecSource[indexLine][indexChar];
		}//for ( unsigned int indexChar = 0...

		// At a '\0' at end (just in case)
		arraySource[indexLine][numCharacters + 0] = '\n';
		arraySource[indexLine][numCharacters + 1] = '\0';

		// Or you could use the (unsecure) strcpy (string copy)
//		strcpy( arraySource[indexLine], shader.vecSource[indexLine].c_str() );

		// Or the "secure" version, where you specify the number of chars to copy
//		strcpy_s( arraySource[indexLine], 
//				  strlen( shader.vecSource[indexLine].c_str() + 1 ),	// Number of char in copy + 0 terminator
//				  shader.vecSource[indexLine].c_str() );

	}//for ( unsigned int indexLine = 0...

//******************************************************************************************
// Print it out (for debug)
	std::cout << "Source (from char** array):" << std::endl;
	for ( unsigned int indexLine = 0; indexLine != numberOfLines; indexLine++ )
	{
		std::cout << "(" << indexLine << "):\t" << arraySource[indexLine] << std::endl;
	}
	std::cout << "END" << std::endl;
//******************************************************************************************

	glShaderSource(shader.m_ID, numberOfLines, arraySource, NULL);
	glCompileShader(shader.m_ID);

	// Get rid of the temp source "c" style array
	for (unsigned int indexLine = 0; indexLine != numberOfLines; indexLine++)
	{	// Delete this line
		delete[] arraySource[indexLine];
	}
	// And delete the original char** array
	delete[] arraySource;

	// Did it work? 
	std::string errorText = "";
	if (WasThereACompileError(shader.m_ID, errorText))
	{
		std::stringstream ssError;
		ssError << shader.GetTypeString();
		ssError << " compile error: ";
		ssError << errorText;
		error = ssError.str();
		return false;
	}

	return true;
}


// Returns empty string if no error
// returns false if no error
bool cShaderLoader::WasThereACompileError(unsigned int shaderID, std::string& errorText)
{
	errorText = "";	// No error

	GLint isCompiled = 0;
	glGetShaderiv(shaderID, GL_COMPILE_STATUS, &isCompiled);
	if (isCompiled == GL_FALSE)
	{
		GLint maxLength = 0;
		glGetShaderiv(shaderID, GL_INFO_LOG_LENGTH, &maxLength);

		char* pLogText = new char[maxLength];
		// Fill with zeros, maybe...?
		glGetShaderInfoLog(shaderID, maxLength, &maxLength, pLogText);
		// Copy char array to string
		errorText.append(pLogText);

		// Extra code that Michael forgot wasn't there... 
		this->m_lastError.append("\n");
		this->m_lastError.append(errorText);


		delete[] pLogText;	// Oops

		return true;	// There WAS an error
	}
	return false; // There WASN'T an error
}

void cShaderLoader::GetAttributes(cItem_Shader &info)
{
	GLint count = 0;
	glGetShaderiv(info.m_ID, GL_ACTIVE_ATTRIBUTES, &count);
	printf("Active Attributes: %d\n", count);

	for (auto i = 0; i < count; i++)
	{
		const unsigned int bufSize = 1024;
		GLchar name[bufSize];
		GLsizei length;
		GLint size;
		GLenum type;
		glGetActiveAttrib(info.m_ID, i, bufSize, &length, &size, &type, name);
		sAttribute att;
		att.m_ID = info.m_ID;
		att.m_index = count;
		att.m_size = size;
		att.m_type = type;
		att.m_name = name;
		m_vecAttributes.push_back(att);
		printf("Attribute #%d Type: %u Name: %s\n", i, type, name);
	}
}

void cShaderLoader::GetUniforms(cItem_Shader& info)
{
	GLint count = 0;
	glGetShaderiv(info.m_ID, GL_ACTIVE_UNIFORMS, &count);
	printf("Active Uniforms: %d\n", count);

	for (auto i = 0; i < count; i++)
	{
		const unsigned int bufSize = 1024;
		GLchar name[bufSize];
		GLsizei length;
		GLint size;
		GLenum type;
		glGetActiveUniform(info.m_ID, i, bufSize, &length, &size, &type, name);
		sUniform unif;
		unif.m_ID = info.m_ID;
		unif.m_index = count;
		unif.m_size = size;
		unif.m_type = type;
		unif.m_name = name;
		m_vecUniforms.push_back(unif);

		printf("Uniform #%d Type: %u Name: %s\n", i, type, name);
	}
}

vecAttributes* cShaderLoader::GetAttributes()
{
	return &m_vecAttributes;
}

vecUniforms* cShaderLoader::GetUniforms()
{
	return &m_vecUniforms;
}
