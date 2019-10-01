#include "cItem_Font.h"

cItem_Font::cItem_Font(std::string id,
	std::string path,
	rapidxml::xml_node<>* parent,
	std::size_t index)
	: cItem_Common(id, path, parent, index)
{

}
cItem_Font::~cItem_Font()
{
}

// For debugging purposes - dumps the contents in human readable form
std::ostream& operator<<(std::ostream& stream, const cItem_Font& val)
{
	stream << "std::ostream& operator<<(std::ostream& stream, const cItem_Font& val)" << "Not Implemented" << std::endl;
	return stream;
}
