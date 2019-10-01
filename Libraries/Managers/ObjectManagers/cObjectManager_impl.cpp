#include "cObjectManager_impl.h"

#include "cObjectManager_impl.h"
#include "GameLibrary/AssetGroups.h"
#include "cObjectManager_Audio.h"
#include <iostream>
#include <stdio.h> 

cObjectManager_impl::cObjectManager_impl()
{
}

cObjectManager_impl::~cObjectManager_impl()
{
	// Cleanup managers
	for (auto in : m_ObjectManagers)
	{
		delete in.second;
	}
}
iObjectManager* cObjectManager_impl::GetObjectManager(const std::string& name)
{
	auto manager = m_ObjectManagers[name];
	assert(manager != NULL);
	return manager;
}

// Root Node of XML document which has assets
void cObjectManager_impl::LoadObjects(rapidxml::xml_node<>* parent, cAssetManager* assetManager)
{
	// This loop is non sensical. Each valid manager should just do the same loop
	// to check for assets and read any that are relevent for them
	//cObjectManager_Audio* audio = new cObjectManager_Audio();
	//m_Managers["audios"] = audio;
	//audio->LoadAssets(parent);

	gamelibrary::AssetGroups groups(parent);
	for (size_t i = 0; i < groups.GetSize(); ++i)
	{
		gamelibrary::AssetGroups temp(groups.GetParent(), i);
		if (temp.isValid())
		{
			gamelibrary::GameAsset_open open(temp.GetNode());
			gamelibrary::GameAsset_type type(temp.GetNode());
			if (type.GetValue() == "audios")
			{
				// The Manager should handle duplicates properly
				if (m_ObjectManagers.find("audios") == m_ObjectManagers.end())
				{
					cObjectManager_Audio* audio = new cObjectManager_Audio();
					m_ObjectManagers["audios"] = audio;
					audio->LoadObjects(parent, assetManager);
				}
			}
			else
			{
				// Handle	"videos"
				//			"images"
				//			"shaders"
				//			"models"
				//			"fonts"
				std::cout << "Unimplemented ObjectManager: (Ignored): " << type.GetValue() << std::endl;
			}
		}
	}

}

std::ostream& operator<<(std::ostream& stream, const cObjectManager_impl& val)
{
	stream << "In cObjectManager_impl" << std::endl;
	for (auto in : val.m_ObjectManagers)
	{
		auto manager = in.second;
		stream << *(manager);
	}
	return stream;
}
