#include "cAssetManager_Programs.h"
#include "GAmeLibrary/AssetGroups.h"
#include "../Shaders/cProgramLoader.h"
#include "cItem_Shader.h"
#include "cAssetManager.h"
#include <iostream>
#include <sstream>

cAssetManager_Programs::cAssetManager_Programs()
{
}
cAssetManager_Programs::~cAssetManager_Programs()
{
}

void cAssetManager_Programs::LoadAssets(rapidxml::xml_node<>* parent)
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
			if (type.GetValue() == "programs")
			{
				Assets assets = group.GetAsset();
				cAssetManager manager;
				iAssetManager::iItems_map* shaders = manager.GetItems("shaders");

				for (size_t i = 0; i < assets.GetSize(); ++i)
				{
					Assets asset(assets.GetParent(), i);
					if (asset.isValid())
					{
						Assets_name assetName(asset.GetNode());

						std::string fullPath = "";						// Virtual asset - no path
						std::string id = assetName.GetValue();
						auto parent = asset.GetParent();
						cItem_Program* program = new cItem_Program(id, fullPath, parent, i);
						m_map_items[program->GetAssetID()] = program;

						AssetParts parts = asset.GetAssetPart();
						for (auto j = 0; j < parts.GetSize(); ++j)
						{
							AssetParts part(parts.GetParent(), j);
							std::string partName = part.GetValue();
							auto item = (*shaders)[partName];
							assert(item);
							if (item)
								program->m_vecShaders.push_back(item);
						}

						cProgramLoader loader;
						bool ok = loader.Load(*program);
						if (!ok)
						{
							program->m_error = loader.GetLastError();
							program->m_valid = false;
							continue;
						}
						program->m_valid = true;

						// Write the properties to the xml file
						Properties prop = asset.GetProperties();
						prop.AddProperty("isValid", std::to_string(program->m_valid));
						vecAttributes* vecAtt = loader.GetAttributes();
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
//				std::cout << "cAssetManager_Programs - Ignoring: " << type.GetValue() << std::endl;
			}
		}
	}
}

iAssetManager::iItems_map* cAssetManager_Programs::GetItems(const std::string& name)
{
	return &m_map_items;
}

std::ostream& operator<<(std::ostream& stream, const cAssetManager_Programs& val)
{
	// TODO
	stream << "std::ostream& operator<<(std::ostream& stream, const cAssetManager_Videos& val)" << " Not implemented" << std::endl;
	return stream;
}
