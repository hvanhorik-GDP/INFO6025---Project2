#pragma once
#include "iAssetManager.h"
class cAssetManager_Shaders : public iAssetManager
{
private:
	cAssetManager_Shaders();
	virtual ~cAssetManager_Shaders();

	// Load assets from XML document
	virtual void LoadAssets(rapidxml::xml_node<>* parent);

	// Retrieve the item information
	virtual iAssetManager::iItems_map* GetItems(const std::string& name);

	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const cAssetManager_Shaders& val);
	friend class cAssetManager_impl;
private:
	iItems_map m_map_items;

};

