#pragma once
#include <fmod/fmod.hpp>
#include <map>
#include <string>
#include <rapidxml/rapidxml.hpp>

class cEngineFMOD
{
};


namespace audioFMOD
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
		void replay();
		std::string get_name();
		float get_volume();
		void set_volume(float value);
		void set_path(std::string new_path);
		bool get_is_paused();
		void set_is_paused(bool new_is_paused);
		bool get_is_playing();
		int get_position();
		unsigned int get_length();
		float get_pitch();
		void set_pitch(float in);
		float get_pan();
		void set_pan(float in);

		struct format
		{
			FMOD_SOUND_TYPE type;
			FMOD_SOUND_FORMAT format;
			int channels;
			int bits;
		};

		std::string get_format_string(FMOD_SOUND_FORMAT in);
		std::string get_type_string(FMOD_SOUND_TYPE type);

		format get_format();
		std::string get_info();

	};

}
