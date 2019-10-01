#pragma once
#include "iAssetManager.h"

class cAssetManager_Videos : public iAssetManager
{
private:
	cAssetManager_Videos();
	virtual ~cAssetManager_Videos();

	// Load assets from XML document
	virtual void LoadAssets(rapidxml::xml_node<>* parent);

	// Retrieve the item information
	virtual iAssetManager::iItems_map* GetItems(const std::string& name);

	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const cAssetManager_Videos& val);
private:
	iItems_map m_map_items;
	friend class cAssetManager_impl;
};

