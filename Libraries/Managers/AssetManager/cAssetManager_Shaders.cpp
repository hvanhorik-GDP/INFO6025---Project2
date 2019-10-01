#include "cAssetManager_Shaders.h"
#include "GAmeLibrary/AssetGroups.h"
#include "../Shaders/cShaderLoader.h"
#include <iostream>
#include <sstream>

cAssetManager_Shaders::cAssetManager_Shaders()
{
}
cAssetManager_Shaders::~cAssetManager_Shaders()
{
}

void cAssetManager_Shaders::LoadAssets(rapidxml::xml_node<>* parent)
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
			if (type.GetValue() == "shaders")
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
						Assets_type assetType(file.GetNode());
						std::string fullPath = rootPath + fileName.GetValue();
						std::cout << fullPath << std::endl;
						std::cout << __FILE__ << __LINE__ << "Found an asset TODO" << std::endl;

						std::string id = assetName.GetValue();
						auto parent = file.GetParent();
						cItem_Shader* item = new cItem_Shader(id, fullPath, parent, i);
						auto val = assetType.GetValue();
						if (val == "fragment")
							item->m_shaderType = cItem_Shader::type::fragment;
						else if (val == "vertex")
							item->m_shaderType = cItem_Shader::type::vertex;
						m_map_items[item->GetAssetID()] = item;

						cShaderLoader loader;
						bool ok = loader.Load(*item);
						if (!ok)
						{
							item->m_error = loader.GetLastError();
							item->m_valid = false;
							continue;
						}
						item->m_valid = true;
						// Write the properties to the xml file
						Properties prop = file.GetProperties();
						prop.AddProperty("isValid", std::to_string(item->m_valid));
						vecAttributes *vecAtt = loader.GetAttributes();
						for (auto att : *vecAtt)
						{
							std::stringstream ss;
							ss << " id = " << att.m_ID
								<< " index = " << att.m_index
								<< " type = " << att.m_type
								<< " size = " << att.m_size
								<< " m_name = " << att.m_name;
							prop.AddProperty("Attribute", ss.str());
						}
						vecUniforms* vecUnif = loader.GetUniforms();
						for (auto unif : *vecUnif)
						{
							std::stringstream ss;
							ss << " id = " << unif.m_ID
								<< " index = " << unif.m_index
								<< " type = " << unif.m_type
								<< " size = " << unif.m_size
								<< " m_name = " << unif.m_name;
							prop.AddProperty("Uniform", ss.str());
						}
					}
				}
			}
			else
			{
//				std::cout << "cAssetManager_Shaders - Ignoring: " << type.GetValue() << std::endl;
			}
		}
	}
}

iAssetManager::iItems_map* cAssetManager_Shaders::GetItems(const std::string& name)
{
	return &m_map_items;
}

std::ostream& operator<<(std::ostream& stream, const cAssetManager_Shaders& val)
{
	// TODO
	stream << "std::ostream& operator<<(std::ostream& stream, const cAssetManager_Videos& val)" << " Not implemented" << std::endl;
	return stream;
}
