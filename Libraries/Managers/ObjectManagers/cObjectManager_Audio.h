#pragma once
#include "iObjectManager.h"
#include "AssetManager/iAssetManager.h"
#include <fmod/fmod.hpp>
#include <map>

namespace audioFMOD_old
{
	//FMOD functions
	void errorCheck(FMOD_RESULT result);
	void releaseFMOD();
	bool initFMOD();

	struct AudioItem
	{
		enum subtype {
			unknown = -1,
			music = 0,
			effects = 1
		};
	public:
		FMOD_RESULT result;
		std::string path;
		std::string name;
		float volume;
		float pitch;
		float pan;
		int pos;
		unsigned int length;
		bool is_paused;
		bool is_playing;

		rapidxml::xml_node<>* parent;		// Offset into the asset tree so we can add properties to it
		std::size_t index = 0;
		subtype m_subtype = subtype::unknown;

	public:
		FMOD::Sound* sound;
		FMOD::Channel* channel;
		//constructor
		AudioItem();
		bool create_and_play_sound(bool is_streamed_sound);
		std::string get_name();
		float get_volume();
		void set_path(std::string new_path);
		bool get_is_paused();
		void set_is_paused(bool new_is_paused);
		bool get_is_playing();
		int get_position();
		unsigned int get_length();

		std::string get_info();

	};

}

class cObjectManager_Audio :
	public iObjectManager
{
public:
	typedef std::map<std::string, audioFMOD_old::AudioItem> vecAudioItems;

	class cObjectManager_Audio();
	virtual ~cObjectManager_Audio();

	// Root Node of XML document which has assets
	virtual void LoadObjects(rapidxml::xml_node<>* parent, cAssetManager* objectManager);
	friend std::ostream& operator<<(std::ostream& stream, const cObjectManager_Audio& val);
	void PlaySomething();
protected:
	vecAudioItems m_vec_Items;
};

