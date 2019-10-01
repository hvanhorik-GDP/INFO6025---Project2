#pragma once
#include "cItem_Common.h"
#include <fmod/fmod.hpp>

// TODO - Move to Object Manager
class cAudio_Sound_FMOD;
class cAudio_Channel_FMOD;

class cItem_Audio : public cItem_Common
{
public:

	enum subtype {
		unknown = -1,
		music = 0,
		effects = 1
	};

	struct format
	{
		FMOD_SOUND_TYPE type;
		FMOD_SOUND_FORMAT format;
		int channels;
		int bits;
	};

	cItem_Audio(std::string id,
				std::string path,
				rapidxml::xml_node<>* parent,
				std::size_t index);
	virtual ~cItem_Audio();

	bool GetExists() const;
	bool GetIsValidAudio() const;
	cItem_Audio::subtype GetSubType() const;
	cItem_Audio::format GetFormat() const;
	unsigned int GetLength() const;

	cAudio_Sound_FMOD* GetSound();
	cAudio_Channel_FMOD* GetChannel();

	// Some helper functions
	std::string get_format_string() const;
	std::string get_type_string() const;

	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const cItem_Audio& val);

private:

	cItem_Audio();				// Bad Consructor
	cAudio_Sound_FMOD* m_sound;
	cAudio_Channel_FMOD* m_channel;
	bool m_exists;
	bool m_isValidAudio;
	subtype m_subtype;
	format m_format;
	unsigned int m_length;		// MS
	friend class cAssetManager_Audios;
};

