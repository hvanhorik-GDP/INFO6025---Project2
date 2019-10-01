#include "cItem_Audio.h"
#include "..//..//AudioEngine/cAudio_Sound_FMOD.h"
#include "..//..//AudioEngine/cAudio_Channel_FMOD.h"

cItem_Audio::cItem_Audio(std::string id,
	std::string path,
	rapidxml::xml_node<>* parent,
	std::size_t index)
	: cItem_Common(id, path, parent, index)
	, m_exists()
	, m_isValidAudio()
	, m_subtype()
	, m_format()
	, m_length(0)
	, m_sound(new cAudio_Sound_FMOD())
	, m_channel(new cAudio_Channel_FMOD())
{

}
cItem_Audio::~cItem_Audio()
{
	delete m_sound;
	delete m_channel;
}

bool cItem_Audio::GetExists() const
{
	return m_exists;
}

bool cItem_Audio::GetIsValidAudio() const
{
	return m_isValidAudio;
}

cItem_Audio::subtype cItem_Audio::GetSubType() const
{
	return m_subtype;
}

cItem_Audio::format cItem_Audio::GetFormat() const
{
	return m_format;
}

unsigned int cItem_Audio::GetLength() const
{
	return m_length;
}

std::string cItem_Audio::get_format_string() const
{
	switch (m_format.format)
	{
	case FMOD_SOUND_FORMAT_NONE:
		return std::string("None");
	case FMOD_SOUND_FORMAT_PCM8:
		return std::string("PCM8");
	case FMOD_SOUND_FORMAT_PCM16:
		return std::string("PCM16");

	case FMOD_SOUND_FORMAT_PCM24:
		return std::string("PCM24");
	case FMOD_SOUND_FORMAT_PCM32:
		return std::string("PCM32");
	case FMOD_SOUND_FORMAT_PCMFLOAT:
		return std::string("PCMFLOAT");
	case FMOD_SOUND_FORMAT_BITSTREAM:
		return std::string("BitStream");
	default:
		return std::string("Unknown format");
	}
}

std::string cItem_Audio::get_type_string() const
{
	switch (m_format.type)
	{
	case FMOD_SOUND_TYPE_UNKNOWN:
		return ("Unknown");
	case FMOD_SOUND_TYPE_AIFF:
		return ("AIFF");
	case FMOD_SOUND_TYPE_ASF:
		return ("ASF");
	case FMOD_SOUND_TYPE_DLS:
		return ("DSL");
	case FMOD_SOUND_TYPE_FLAC:
		return ("FLAC");
	case FMOD_SOUND_TYPE_FSB:
		return ("FSB");
	case FMOD_SOUND_TYPE_IT:
		return ("IT");
	case FMOD_SOUND_TYPE_MIDI:
		return ("MIDI");
	case FMOD_SOUND_TYPE_MOD:
		return ("MOD");
	case FMOD_SOUND_TYPE_MPEG:
		return ("MPEG");
	case FMOD_SOUND_TYPE_OGGVORBIS:
		return ("OGGVORBIS");
	case FMOD_SOUND_TYPE_PLAYLIST:
		return ("Playlist");
	case FMOD_SOUND_TYPE_RAW:
		return ("raw");
	case FMOD_SOUND_TYPE_S3M:
		return ("S3M");
	case FMOD_SOUND_TYPE_USER:
		return ("User");
	case FMOD_SOUND_TYPE_WAV:
		return ("WAV");
	case FMOD_SOUND_TYPE_XM:
		return ("XM");
	case FMOD_SOUND_TYPE_XMA:
		return ("XMA");
	case FMOD_SOUND_TYPE_AUDIOQUEUE:
		return ("AUDIOQUE");
	case FMOD_SOUND_TYPE_AT9:
		return ("AT9");
	case FMOD_SOUND_TYPE_VORBIS:
		return ("VORBIS");
	case FMOD_SOUND_TYPE_MEDIA_FOUNDATION:
		return ("media Foundation");
	case FMOD_SOUND_TYPE_MEDIACODEC:
		return ("MEDIACODEC");
	case FMOD_SOUND_TYPE_FADPCM:
		return ("FADPCM");

	default:
		return std::string("Unknown type");
	}
}

cAudio_Sound_FMOD* cItem_Audio::GetSound()
{
	return m_sound;
}

cAudio_Channel_FMOD* cItem_Audio::GetChannel()
{
	return m_channel;
}


// For debugging purposes - dumps the contents in human readable form
std::ostream& operator<<(std::ostream& stream, const cItem_Audio& val)
{
	stream << "std::ostream& operator<<(std::ostream& stream, const cItem_Audio& val)" << "Not Implemented" << std::endl;
	return stream;
}
