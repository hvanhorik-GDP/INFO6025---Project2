#pragma once
#include "iObjectManager.h"

class cObjectManager_impl;
class cAssetManager;

class cObjectManager : public iObjectManager
{
public:
	cObjectManager();
	virtual ~cObjectManager() {}

	// Root Node of XML document which has assets
	virtual void LoadObjects(rapidxml::xml_node<>* parent, cAssetManager* assetManagers);

	iObjectManager* GetObjectManager(const std::string& name);
	friend std::ostream& operator<<(std::ostream& stream, const cObjectManager& val);

protected:
	cObjectManager_impl* m_cObjectManager_impl;
};
