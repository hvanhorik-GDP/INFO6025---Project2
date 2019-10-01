#include "cItem_Image.h"

cItem_Image::cItem_Image(std::string id,
	std::string path,
	rapidxml::xml_node<>* parent,
	std::size_t index)
	: cItem_Common(id, path, parent, index)
{

}
cItem_Image::~cItem_Image()
{
}

// For debugging purposes - dumps the contents in human readable form
std::ostream& operator<<(std::ostream& stream, const cItem_Image& val)
{
	stream << "std::ostream& operator<<(std::ostream& stream, const cItem_Image& val)" << "Not Implemented" << std::endl;
	return stream;
}
