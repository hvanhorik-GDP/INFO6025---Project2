#pragma once

#include <ostream>
#include <rapidxml/rapidxml.hpp>

class cAssetManager;

class iObjectManager
{
public:
	iObjectManager() {}
	virtual ~iObjectManager() {}

	// Root Node of XML document which has assets
	virtual void LoadObjects(rapidxml::xml_node<>* parent, cAssetManager* assetManager) = 0;
	friend std::ostream& operator<<(std::ostream& stream, const iObjectManager& val);
};

