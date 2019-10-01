#pragma once
#include "iAssetManager.h"
#include <map>
#include <string>

class cAssetManager_impl : public iAssetManager
{
public:
	cAssetManager_impl();
	virtual ~cAssetManager_impl() final;

	// Load assets from XML document
	virtual void LoadAssets(rapidxml::xml_node<>* parent);

	// Retrieve the item information
	virtual iAssetManager::iItems_map* GetItems(const std::string& name);

	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const cAssetManager_impl& val);

	// Hack now to get at the underlying AssetManagers
	iAssetManager* GetAssetManager(const std::string& name);
protected:
	typedef std::map<std::string, iAssetManager*>  mapAssetManagers;
	mapAssetManagers m_AssetManagers;
};

