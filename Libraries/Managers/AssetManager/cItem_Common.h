#pragma once
#include "iAssetManager.h"
#include <rapidxml/rapidxml.hpp>
#include <string>

class cItem_Common : public iAssetManager::iItem
{
public:
	cItem_Common(	std::string id,
					std::string path,
					rapidxml::xml_node<>* parent,
					std::size_t index);

	virtual ~cItem_Common();
	const std::string& GetAssetID() const;
	const std::string& GetRelativeName() const;
	rapidxml::xml_node<>* GetParent() const;
	bool IsXMLValid() const;
	std::size_t GetIndex() const;

	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const cItem_Common& val);

private:
	cItem_Common();
	std::string m_id;
	std::string m_path;
	// Point to original XML parent node and Index
	rapidxml::xml_node<>* m_parent;		// Offset into the asset tree so we can add properties to it
	std::size_t m_index;

};

