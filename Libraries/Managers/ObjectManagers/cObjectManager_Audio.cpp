#include "cObjectManager_Audio.h"

#include "cObjectManager_Audio.h"
#include "GAmeLibrary/AssetGroups.h"
#include <iostream>
#include <sstream>

#include <windows.h>

namespace audioFMOD_old
{

	//FMOD globals
	FMOD::System* _system = 0;
	//	FMOD::Sound* _sound = 0;
	//	FMOD::Channel* _channel = 0;
	FMOD_RESULT _result = FMOD_OK;

	AudioItem::AudioItem() {
		result = FMOD_OK;
		path = "";
		volume = 0.5f;
		pitch = 0.0f;//check documentation for pitch allowed values
		pan = 0.0f; //chec documentation for pan allowed values
		is_paused = true;
		is_playing = false;
		sound = 0;
		channel = 0;
		m_subtype = subtype::unknown;
	}

	/*
	2 modes to create sounds
	1. sample loads all audio file into memory
	2. stream sound loads on demand you pay the price of a bit CPU overhead
	*/
	bool AudioItem::create_and_play_sound(bool is_streamed_sound) {
		if (_system) {
			result = _system->createSound(path.c_str(), (is_streamed_sound) ? FMOD_CREATESTREAM : FMOD_DEFAULT, 0, &sound);
			errorCheck(result);
			result = _system->playSound(sound, 0, is_paused, &channel);
			errorCheck(result);
			return true;
		}

		return false;
	}

	std::string AudioItem::get_name() {
		char buf[1024];
		if (sound) {
			result = sound->getName(buf, 1024);
			errorCheck(result);
		}
		return std::string(buf);
	}

	float AudioItem::get_volume() {
		if (channel) {
			result = channel->getVolume(&volume);
			errorCheck(result);
		}

		return volume;
	}

	void AudioItem::set_path(std::string new_path) {
		path = new_path;
	}

	bool AudioItem::get_is_paused() {
		if (channel) {
			result = channel->getPaused(&is_paused);
			errorCheck(result);
		}
		return is_paused;
	}
	void AudioItem::set_is_paused(bool new_is_paused) {
		if (channel) {
			is_paused = new_is_paused;
			result = channel->setPaused(is_paused);
			errorCheck(result);
		}
	}

	bool AudioItem::get_is_playing()
	{
		if (channel) {
			result = channel->isPlaying(&is_playing);
			errorCheck(result);
		}
		return is_playing;
	}

	int AudioItem::get_position()
	{
		unsigned int pos;

		if (channel)
		{
			_result = channel->getPosition(&pos, FMOD_TIMEUNIT_MS);
			errorCheck(_result);
		}
		return pos;
	}

	unsigned int AudioItem::get_length()
	{

		if (sound)
		{
			sound->getLength(&length, FMOD_TIMEUNIT_MS);
			errorCheck(_result);
		}
		return length;
	}


	//create get info method
	std::string AudioItem::get_info() {
		std::ostringstream ss;

		//get name
		ss << "Name: " << this->get_name() << std::endl;
		ss << "Volume: " << this->get_volume() << std::endl;
		ss << "Is paused: " << ((this->get_is_paused()) ? "TRUE" : "FALSE") << std::endl;

		std::string result = ss.str();
		return result;
	}

	void errorCheck(FMOD_RESULT result) {

		if (result != FMOD_OK) {
			std::cout << "FMOD error: " << result << std::endl;
			releaseFMOD();
			system("pause");
			throw std::exception();
		}
	}

	bool initFMOD() {

		_result = FMOD::System_Create(&_system);
		errorCheck(_result);

		_result = _system->init(32, FMOD_INIT_NORMAL, 0);
		errorCheck(_result);

		return true;
	}

	void releaseFMOD() {
		if (_system) {
			_result = _system->close();
			errorCheck(_result);
			_result = _system->release();
			errorCheck(_result);
		}
	}

}

using namespace audioFMOD_old;

cObjectManager_Audio::cObjectManager_Audio()
{
}
cObjectManager_Audio::~cObjectManager_Audio()
{
}

void cObjectManager_Audio::LoadObjects(rapidxml::xml_node<>* parent, cAssetManager* objectManager)
{
	using namespace gamelibrary;
	// This loop is non sensical. Each valid manager should just do the same loop
	// to check for assets and read any that are relevent for them
	//cObjectManager_Audio* audio = new cObjectManager_Audio();
	//m_Managers["audios"] = audio;
	//audio->LoadAssets(parent);

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

						AudioItem item;
						item.path = fullPath;
						item.name = assetName.GetValue();
						item.index = i;
						item.parent = file.GetParent();
						auto val = subtype.GetValue();
						if (val == "music")
							item.m_subtype = AudioItem::subtype::music;
						if (val == "effects")
							item.m_subtype = AudioItem::subtype::effects;
						m_vec_Items[item.name] = item;
					}
				}
			}
			else
			{
				// Handle	"videos"
				//			"images"
				//			"shaders"
				//			"models"
				//			"fonts"
				std::cout << "cObjectManager_Audio - Ignoring: " << type.GetValue() << std::endl;
			}
		}
	}
}

std::ostream& operator<<(std::ostream& stream, const cObjectManager_Audio& val)
{
	return stream;
}

void cObjectManager_Audio::PlaySomething()
{
	for (auto item : m_vec_Items)
	{
		auto audioItem = item.second;
		std::cout << "Playing Audio File: " << audioItem.name << ": " << audioItem.path << std::endl;
		audioItem.create_and_play_sound(true);
		audioItem.set_is_paused(false);
		bool is_playing = true;
		while (is_playing)
		{
			Sleep(100);
			bool is_paused = audioItem.get_is_paused();
			is_playing = audioItem.get_is_playing();
			unsigned int pos = audioItem.get_position();
			unsigned int length = audioItem.get_length();
			std::string name = audioItem.get_name();
			std::cout << name << " length: " << length << " pos: " << pos << std::endl;
		}
	}
}
