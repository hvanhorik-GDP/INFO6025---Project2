#pragma once
#include <fmod/fmod.hpp>
#include <ostream>

class cAudio_Sound_FMOD
{
public:


	cAudio_Sound_FMOD();
	virtual ~cAudio_Sound_FMOD();

	void Release();

	struct format
	{
		FMOD_SOUND_TYPE type;
		FMOD_SOUND_FORMAT format;
		int channels;
		int bits;
	};

	cAudio_Sound_FMOD::format GetFormat() const;
	unsigned int GetLength() const;

	static std::string get_format_string(FMOD_SOUND_FORMAT in);
	static std::string  get_type_string(FMOD_SOUND_TYPE type);
	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const cAudio_Sound_FMOD& val);

private:
	FMOD::Sound* m_sound;
	mutable FMOD_RESULT m_result;
	friend class cAudio_System_FMOD;
};

