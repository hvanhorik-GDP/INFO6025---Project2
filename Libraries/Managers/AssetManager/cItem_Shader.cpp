#include "cItem_Shader.h"

cItem_Shader::cItem_Shader(std::string id,
	std::string path,
	rapidxml::xml_node<>* parent,
	std::size_t index)
	: cItem_Common(id, path, parent, index)
{

}
cItem_Shader::~cItem_Shader()
{
}

unsigned int cItem_Shader::GetID() const
{
	return m_ID;
}

cItem_Shader::type cItem_Shader::GetType() const
{
	return m_shaderType;
}

std::string cItem_Shader::cItem_Shader::GetTypeString(void) const
{
	switch (m_shaderType)
	{
	case cItem_Shader::vertex:
		return "vertex";
		break;
	case cItem_Shader::fragment:
		return "fragment";
		break;
	case cItem_Shader::unknown:
	default:
		return "unknown";
		break;
	}
	return "unknown";
}


// For debugging purposes - dumps the contents in human readable form
std::ostream& operator<<(std::ostream& stream, const cItem_Shader& val)
{
	stream << "std::ostream& operator<<(std::ostream& stream, const cItem_Shader& val)" << "Not Implemented" << std::endl;
	return stream;
}
