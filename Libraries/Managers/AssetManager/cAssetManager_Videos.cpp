#include "cAssetManager_Videos.h"
#include "GAmeLibrary/AssetGroups.h"
#include <iostream>
#include <sstream>

cAssetManager_Videos::cAssetManager_Videos()
{
}
cAssetManager_Videos::~cAssetManager_Videos()
{
}

void cAssetManager_Videos::LoadAssets(rapidxml::xml_node<>* parent)
{
	using namespace gamelibrary;

	AssetGroups groups(parent);
	for (size_t i = 0; i < groups.GetSize(); ++i)
	{
		AssetGroups group(groups.GetParent(), i);
		if (group.isValid())
		{
			GameAsset_open open(group.GetNode());
			GameAsset_type type(group.GetNode());
			if (type.GetValue() == "videos")
			{
				GameAsset_subtype subtype(group.GetNode());
				AssetRoot  root = group.GetAssetRoot();
				std::string rootPath = root.GetValue();		// Root Path
				Assets assets = group.GetAsset();

				for (size_t i = 0; i < assets.GetSize(); ++i)
				{
					Assets file(assets.GetParent(), i);
					if (file.isValid())
					{
						Assets_name assetName(file.GetNode());
						AssetFile fileName = file.GetAssetFile();
						std::string fullPath = rootPath + fileName.GetValue();
						std::cout << fullPath << std::endl;
						std::cout << __FILE__ << __LINE__ << "Found an asset TODO" << std::endl;
					}
				}
			}
			else
			{
//				std::cout << "cAssetManager_Videos - Ignoring: " << type.GetValue() << std::endl;
			}
		}
	}
}

iAssetManager::iItems_map* cAssetManager_Videos::GetItems(const std::string& name)
{
	return &m_map_items;
}

std::ostream& operator<<(std::ostream& stream, const cAssetManager_Videos& val)
{
	// TODO
	stream << "std::ostream& operator<<(std::ostream& stream, const cAssetManager_Videos& val)" << " Not implemented" << std::endl;
	return stream;
}
