#include "cAssetManager_Images.h"

#include "GAmeLibrary/AssetGroups.h"
#include <iostream>
#include <sstream>

cAssetManager_Images::cAssetManager_Images()
{
}
cAssetManager_Images::~cAssetManager_Images()
{
}

void cAssetManager_Images::LoadAssets(rapidxml::xml_node<>* parent)
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
			if (type.GetValue() == "images")
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
//				std::cout << "cAssetManager_Images - Ignoring: " << type.GetValue() << std::endl;
			}
		}
	}
}

iAssetManager::iItems_map* cAssetManager_Images::GetItems(const std::string& name)
{
	return &m_map_items;
}

std::ostream& operator<<(std::ostream& stream, const cAssetManager_Images& val)
{
	// TODO
	stream << "std::ostream& operator<<(std::ostream& stream, const cAssetManager_Videos& val)" << " Not implemented" << std::endl;
	return stream;
}
