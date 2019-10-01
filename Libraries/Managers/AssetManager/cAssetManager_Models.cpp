#include "cAssetManager_Models.h"
#include "cItem_Model.h"
#include "GameLibrary/AssetGroups.h"
#include "../Models/cModelLoader.h"
#include <iostream>
#include <sstream>

cAssetManager_Models::cAssetManager_Models()
{
}
cAssetManager_Models::~cAssetManager_Models()
{
}

void cAssetManager_Models::LoadAssets(rapidxml::xml_node<>* parent)
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
			if (type.GetValue() == "models")
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
						//std::cout << __FILE__ << __LINE__ << "Found an asset" << std::endl;
	
						std::string id = assetName.GetValue();
						auto parent = file.GetParent();
						cItem_Model* item = new cItem_Model(id, fullPath, parent, i);
						auto val = subtype.GetValue();
						m_map_items[item->GetAssetID()] = item;

						// TODO - merge mesh and cItem_Model
						cMesh mesh;
						cModelLoader loader;
						// Just load the header for speed
						bool ok = loader.LoadPlyModelInfo(fullPath, mesh);
						// Write the properties to the xml file
						Properties prop = file.GetProperties();
						prop.AddProperty("type", mesh.m_type);
						prop.AddProperty("format", mesh.m_format);
						prop.AddProperty("vertex", std::to_string(mesh.m_vertices));
						for (auto in : mesh.m_vecProperties)
						{
							prop.AddProperty("property", in.first + " " + in.second);
						}
						prop.AddProperty("face", std::to_string(mesh.m_faces));
						prop.AddProperty("valid", std::to_string(mesh.m_isValid));
						prop.AddProperty("normals", std::to_string(mesh.m_hasNormals));
						prop.AddProperty("colours", std::to_string(mesh.m_hasColor));
					}
				}
			}
			else
			{
//				std::cout << "cAssetManager_Models - Ignoring: " << type.GetValue() << std::endl;
			}
		}
	}
}

iAssetManager::iItems_map* cAssetManager_Models::GetItems(const std::string& name)
{
	return &m_map_items;
}

std::ostream& operator<<(std::ostream& stream, const cAssetManager_Models& val)
{
	// TODO
	stream << "std::ostream& operator<<(std::ostream& stream, const cAssetManager_Videos& val)" << " Not implemented" << std::endl;
	return stream;
}
