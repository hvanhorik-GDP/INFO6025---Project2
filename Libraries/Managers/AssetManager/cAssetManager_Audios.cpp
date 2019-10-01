#include "cAssetManager_Audios.h"
#include "GAmeLibrary/AssetGroups.h"
#include "../../AudioEngine/cAudio_System.h"
#include "../../AudioEngine/cAudio_System_FMOD.h"
#include <iostream>
#include <sstream>

#include <windows.h>

cAssetManager_Audios::cAssetManager_Audios()
{
}
cAssetManager_Audios::~cAssetManager_Audios() 
{
}

void cAssetManager_Audios::LoadAssets(rapidxml::xml_node<>* parent)
{
	using namespace gamelibrary;

	cAudio_System audio;
	iAudio_System* impl = audio.Get_impl();
	cAudio_System_FMOD* implFMOD = dynamic_cast<cAudio_System_FMOD*>(impl);
	assert(implFMOD);
	bool iInited = false;
	if (!implFMOD->IsInit())
	{
		implFMOD->Init(32);
		iInited = true;
	}

	AssetGroups groups(parent);
	for (size_t i = 0; i < groups.GetSize(); ++i)
	{
		AssetGroups group(groups.GetParent(), i);
		if (group.isValid())
		{
			GameAsset_open open(group.GetNode());
			GameAsset_type type(group.GetNode());
			if (type.GetValue() == "audios")
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

						std::string id = assetName.GetValue();
						auto parent = file.GetParent();
						cItem_Audio* item = new cItem_Audio(id, fullPath, parent, i);
						auto val = subtype.GetValue();
						if (val == "music")
							item->m_subtype = cItem_Audio::subtype::music;
						if (val == "effects")
							item->m_subtype = cItem_Audio::subtype::effects;
						m_map_items[item->GetAssetID()] = item;

						cAudio_Sound_FMOD sound;
						FMOD_MODE mode = FMOD_CREATESTREAM;
						implFMOD->CreateSound(sound, fullPath, mode);

						cAudio_Sound_FMOD::format format = sound.GetFormat();
						item->m_format.bits = format.bits;
						item->m_format.channels = format.channels;
						item->m_format.format = format.format;
						item->m_format.type = format.type;

						// Write the properties to the xml file
						Properties prop = file.GetProperties();
						prop.AddProperty("bits", std::to_string(format.bits));
						prop.AddProperty("channels", std::to_string(format.channels));
						prop.AddProperty("format", cAudio_Sound_FMOD::get_format_string(format.format));
						prop.AddProperty("type", cAudio_Sound_FMOD::get_type_string(format.type));

						unsigned int length = sound.GetLength();
						prop.AddProperty("length", std::to_string(length));

						sound.Release();
//						std::cout << file << std::endl;
					}
				}
			}
			else
			{
//				std::cout << "cAssetManager_Audios - Ignoring: " << type.GetValue() << std::endl;
			}
		}
	}
	if (iInited)
		implFMOD->Close();
}

iAssetManager::iItems_map* cAssetManager_Audios::GetItems(const std::string& name)
{
	return &m_map_items;
}

std::ostream& operator<<(std::ostream& stream, const cAssetManager_Audios& val)
{
	// TODO
	stream << "std::ostream& operator<<(std::ostream& stream, const cAssetManager_Audios& val)" << "Not Implemented" << std::endl;
	return stream;
}
