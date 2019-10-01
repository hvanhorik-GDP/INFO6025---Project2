
#include "cObjectManager.h"
#include "cObjectManager_impl.h"
#include <cassert>

cObjectManager::cObjectManager()
{
	if (!m_cObjectManager_impl)
		m_cObjectManager_impl = new cObjectManager_impl();
};

void cObjectManager::LoadObjects(rapidxml::xml_node<>* parent, cAssetManager* objectManager)
{
	assert(m_cObjectManager_impl);
	m_cObjectManager_impl->LoadObjects(parent, objectManager);
}

std::ostream& operator<<(std::ostream& stream, const cObjectManager& val)
{
	assert(val.m_cObjectManager_impl != NULL);
	stream << val.m_cObjectManager_impl;
	return stream;
}

iObjectManager* cObjectManager::GetObjectManager(const std::string& name)
{
	assert(m_cObjectManager_impl);
	return m_cObjectManager_impl->GetObjectManager(name);
}
