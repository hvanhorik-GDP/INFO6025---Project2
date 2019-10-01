#pragma once
#include "iAssetManager.h"

class cAssetManager_impl;

class cAssetManager : public iAssetManager
{
public:
	cAssetManager();
	virtual ~cAssetManager() {}

	// Load assets from XML document
	virtual void LoadAssets(rapidxml::xml_node<>* parent);

	// Retrieve the item information
	virtual iAssetManager::iItems_map* GetItems(const std::string& name);

	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const cAssetManager& val);

	// Hack now to get at the underlying AssetManagers
	iAssetManager* GetAssetManager(const std::string& name);
protected:
};