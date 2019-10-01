#include "cItem_Model.h"

cItem_Model::cItem_Model(std::string id,
	std::string path,
	rapidxml::xml_node<>* parent,
	std::size_t index)
	: cItem_Common(id, path, parent, index)
{

}
cItem_Model::~cItem_Model()
{
}

// For debugging purposes - dumps the contents in human readable form
std::ostream& operator<<(std::ostream& stream, const cItem_Model& val)
{
	stream << "std::ostream& operator<<(std::ostream& stream, const cItem_Model& val)" << "Not Implemented" << std::endl;
	return stream;
}
