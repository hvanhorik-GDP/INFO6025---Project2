#pragma once

#include "iObjectManager.h"
#include <map>
#include <string>

class cAssetManager;

class cObjectManager_impl : public iObjectManager
{
public:
	cObjectManager_impl();
	virtual ~cObjectManager_impl() final;

	// Root Node of XML document which has assets
	virtual void LoadObjects(rapidxml::xml_node<>* parent, cAssetManager* assetManager);
	iObjectManager* GetObjectManager(const std::string& name);
	friend std::ostream& operator<<(std::ostream& stream, const cObjectManager_impl& val);
protected:
	typedef std::map<std::string, iObjectManager*>  mapObjectManagers;
	mapObjectManagers m_ObjectManagers;
};

