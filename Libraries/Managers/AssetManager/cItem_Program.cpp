#include "cItem_Program.h"

cItem_Program::cItem_Program(std::string id,
	std::string path,
	rapidxml::xml_node<>* parent,
	std::size_t index)
	: cItem_Common(id, path, parent, index)
{
}

cItem_Program::~cItem_Program()
{
}

unsigned int cItem_Program::GetID() const
{
	return m_ID;
}

cItem_Program::vecShaders* cItem_Program::GetShaders()
{
	return &m_vecShaders;
}

// For debugging purposes - dumps the contents in human readable form
std::ostream& operator<<(std::ostream& stream, const cItem_Program& val)
{
	stream << "std::ostream& operator<<(std::ostream& stream, const cItem_Program& val)" << "Not Implemented" << std::endl;
	return stream;
}
