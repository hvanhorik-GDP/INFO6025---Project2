#include "cItem_Common.h"

cItem_Common::cItem_Common()
	: m_id()
	, m_path()
	, m_parent(NULL)
	, m_index(0)
{
	assert(false);		// Bad Constructor (The only way to set things is via the proper construtor)
}

cItem_Common::cItem_Common(	std::string id,
							std::string path,
							rapidxml::xml_node<>* parent,
							std::size_t index)
	: m_id(id)
	, m_path(path)
	, m_parent(parent)
	, m_index(index)
{
}

cItem_Common::~cItem_Common()
{

}

const std::string& cItem_Common::GetAssetID() const
{
	return m_id;
}

const std::string& cItem_Common::GetRelativeName() const
{
	return m_path;
}

rapidxml::xml_node<>* cItem_Common::GetParent() const
{
	return m_parent;
}

bool cItem_Common::IsXMLValid() const
{
	return (m_parent);
}

std::size_t cItem_Common::GetIndex() const
{
	return m_index;
}

// For debugging purposes - dumps the contents in human readable form
std::ostream& operator<<(std::ostream& stream, const cItem_Common& val)
{
	stream << "std::ostream& operator<<(std::ostream& stream, const cItem_Common& val)" << "Not Implemented" << std::endl;
	return stream;
}
