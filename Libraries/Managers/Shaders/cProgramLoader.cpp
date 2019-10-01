#include "cProgramLoader.h"
#include "../AssetManager/cItem_Shader.h"


#include "GLCommon.h"	// For all the OpenGL calls, etc.

#include <fstream>
#include <sstream>		// "string stream"
#include <iostream>
#include <vector>

#include <algorithm>		// for the std::copy
#include <iterator>			// for the back_inserter

cProgramLoader::cProgramLoader()
{

}

cProgramLoader::~cProgramLoader()
{

}

bool cProgramLoader::Load(cItem_Program& program)
{
	std::string errorText = "";

	cItem_Shader* vertexShad = 0;
	cItem_Shader* fragShader = 0;
	cItem_Program::vecShaders* shaders = program.GetShaders();
	for (auto item : *shaders)
	{
		cItem_Shader* shader = dynamic_cast<cItem_Shader*>(item);
		switch (shader->GetType())
		{
		case cItem_Shader::vertex:
		{
			vertexShad = shader;
			break;
		}
		case cItem_Shader::fragment:
		{
			fragShader = shader;
			break;
		}
		}
	}

	assert(vertexShad);
	assert(fragShader);
	program.m_ID = ::glCreateProgram();

	::glAttachShader(program.m_ID, vertexShad->GetID());
	::glAttachShader(program.m_ID, fragShader->GetID());
	::glLinkProgram(program.m_ID);

	// Was there a link error? 
	errorText = "";
	if (this->WasThereALinkError(program.m_ID, errorText))
	{
		std::stringstream ssError;
		ssError << "Shader program link error: ";
		ssError << errorText;
		this->m_lastError = ssError.str();
		return false;
	}

	GetAttributes(program);
	GetUniforms(program);

	return true;
}



bool cProgramLoader::WasThereALinkError(unsigned int programID, std::string& errorText)
{
	errorText = "";	// No error

	GLint wasError = 0;
	glGetProgramiv(programID, GL_LINK_STATUS, &wasError);
	if (wasError == GL_FALSE)
	{
		GLint maxLength = 0;
		glGetProgramiv(programID, GL_INFO_LOG_LENGTH, &maxLength);

		char* pLogText = new char[maxLength];
		// Fill with zeros, maybe...?
		glGetProgramInfoLog(programID, maxLength, &maxLength, pLogText);
		// Copy char array to string
		errorText.append(pLogText);

		// Extra code that Michael forgot wasn't there... 
		this->m_lastError.append("\n");
		this->m_lastError.append(errorText);


		delete[] pLogText;

		// There WAS an error
		return true;
	}

	// There WASN'T an error
	return false;
}

std::string cProgramLoader::GetLastError()
{
	std::string lastErrorTemp = this->m_lastError;
//	this->m_lastError = "";
	return lastErrorTemp;
}

void cProgramLoader::GetAttributes(cItem_Program &info)
{
	GLint count = 0;
	glGetProgramiv(info.m_ID, GL_ACTIVE_ATTRIBUTES, &count);
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

void cProgramLoader::GetUniforms(cItem_Program& info)
{
	GLint count = 0;
	glGetProgramiv(info.m_ID, GL_ACTIVE_UNIFORMS, &count);
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

vecAttributes* cProgramLoader::GetAttributes()
{
	return &m_vecAttributes;
}

vecUniforms* cProgramLoader::GetUniforms()
{
	return &m_vecUniforms;
}