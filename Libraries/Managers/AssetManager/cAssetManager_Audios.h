#pragma once
#include "iAssetManager.h"
#include "cItem_Audio.h"
#include <map>

class cAssetManager_Audios : public iAssetManager
{

private:
	cAssetManager_Audios();
	virtual ~cAssetManager_Audios();

	// Load assets from XML document
	virtual void LoadAssets(rapidxml::xml_node<>* parent);

	// Retrieve the item information
	virtual iAssetManager::iItems_map* GetItems(const std::string& name);

	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const cAssetManager_Audios& val);

	//void PlaySomething();
	//vecAudioItems& GetAudioItems();
	friend class cAssetManager_impl;
private:
	iItems_map m_map_items;
};

