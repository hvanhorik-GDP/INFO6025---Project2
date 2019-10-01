#include "cItem_Video.h"

cItem_Video::cItem_Video(std::string id,
			std::string path,
			rapidxml::xml_node<>* parent,
			std::size_t index)
	: cItem_Common(id,  path, parent, index)
{

}
cItem_Video::~cItem_Video()
{
}

// For debugging purposes - dumps the contents in human readable form
std::ostream& operator<<(std::ostream& stream, const cItem_Video& val)
{
	stream << "std::ostream& operator<<(std::ostream& stream, const cItem_Video& val)" << "Not Implemented" << std::endl;
	return stream;
}
