#include "cAssetManager.h"
#include "cAssetManager_impl.h"
#include <cassert>

cAssetManager_impl* m_cAssetManager_impl;		// The one and only

cAssetManager::cAssetManager()
{
	if (!m_cAssetManager_impl)
		m_cAssetManager_impl = new cAssetManager_impl();
};

void cAssetManager::LoadAssets(rapidxml::xml_node<>* parent)
{
	assert(m_cAssetManager_impl);
	m_cAssetManager_impl->LoadAssets(parent);
}

// Retrieve the item information
iAssetManager::iItems_map* cAssetManager::GetItems(const std::string& name)
{
	assert(m_cAssetManager_impl);
	return m_cAssetManager_impl->GetItems(name);
}

std::ostream& operator<<(std::ostream& stream, const cAssetManager& val)
{
	stream << *m_cAssetManager_impl;
	return stream;
}

iAssetManager* cAssetManager::GetAssetManager(const std::string& name)
{
	assert(m_cAssetManager_impl);
	return m_cAssetManager_impl->GetAssetManager(name);
}
