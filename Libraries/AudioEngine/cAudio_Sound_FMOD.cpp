#include "cAudio_Sound_FMOD.h"
#include "c_Audio_Exception_FMOD.h"

cAudio_Sound_FMOD::cAudio_Sound_FMOD()
{
}

cAudio_Sound_FMOD::~cAudio_Sound_FMOD()
{
	if (m_sound)
	{
		m_sound->release();
		m_sound = NULL;
	}
}

void cAudio_Sound_FMOD::Release()
{
	if (m_sound)
	{
		m_sound->release();
		m_sound = NULL;
	}
}

cAudio_Sound_FMOD::format cAudio_Sound_FMOD::GetFormat() const
{
	format out;

	if (m_sound) {
		m_result = m_sound->getFormat(&out.type, &out.format, &out.channels, &out.bits);
		c_Audio_Exception_FMOD::throwIfError(m_result);
	}
	return out;
}
std::string cAudio_Sound_FMOD::get_format_string(FMOD_SOUND_FORMAT in)
{
	switch (in)
	{
	case FMOD_SOUND_FORMAT_NONE:
		return std::string("FMOD_SOUND_FORMAT_NONE");
	case FMOD_SOUND_FORMAT_PCM8:
		return std::string("FMOD_SOUND_FORMAT_PCM8");
	case FMOD_SOUND_FORMAT_PCM16:
		return std::string("FMOD_SOUND_FORMAT_PCM16");

	case FMOD_SOUND_FORMAT_PCM24:
		return std::string("FMOD_SOUND_FORMAT_PCM24");
	case FMOD_SOUND_FORMAT_PCM32:
		return std::string("FMOD_SOUND_FORMAT_PCM32");
	case FMOD_SOUND_FORMAT_PCMFLOAT:
		return std::string("FMOD_SOUND_FORMAT_PCMFLOAT");
	case FMOD_SOUND_FORMAT_BITSTREAM:
		return std::string("FMOD_SOUND_FORMAT_BITSTREAM");
	default:
		return std::string("Unknown format");
	}
}

unsigned int cAudio_Sound_FMOD::GetLength() const
{
	unsigned int length;
	if (m_sound)
	{
		m_result = m_sound->getLength(&length, FMOD_TIMEUNIT_MS);
		c_Audio_Exception_FMOD::throwIfError(m_result);
	}
	return length;
}



std::string  cAudio_Sound_FMOD::get_type_string(FMOD_SOUND_TYPE type)
{
	switch (type)
	{
	case FMOD_SOUND_TYPE_UNKNOWN:
		return ("FMOD_SOUND_TYPE_UNKNOWN");
	case FMOD_SOUND_TYPE_AIFF:
		return ("FMOD_SOUND_TYPE_AIFF");
	case FMOD_SOUND_TYPE_ASF:
		return ("FMOD_SOUND_TYPE_ASF");
	case FMOD_SOUND_TYPE_DLS:
		return ("FMOD_SOUND_TYPE_DLS");
	case FMOD_SOUND_TYPE_FLAC:
		return ("FMOD_SOUND_TYPE_FLAC");
	case FMOD_SOUND_TYPE_FSB:
		return ("FMOD_SOUND_TYPE_FSB");
	case FMOD_SOUND_TYPE_IT:
		return ("FMOD_SOUND_TYPE_IT");
	case FMOD_SOUND_TYPE_MIDI:
		return ("FMOD_SOUND_TYPE_MIDI");
	case FMOD_SOUND_TYPE_MOD:
		return ("FMOD_SOUND_TYPE_MOD");
	case FMOD_SOUND_TYPE_MPEG:
		return ("MPEG");
	case FMOD_SOUND_TYPE_OGGVORBIS:
		return ("FMOD_SOUND_TYPE_OGGVORBIS");
	case FMOD_SOUND_TYPE_PLAYLIST:
		return ("FMOD_SOUND_TYPE_PLAYLIST");
	case FMOD_SOUND_TYPE_RAW:
		return ("FMOD_SOUND_TYPE_RAW");
	case FMOD_SOUND_TYPE_S3M:
		return ("FMOD_SOUND_TYPE_S3M");
	case FMOD_SOUND_TYPE_USER:
		return ("FMOD_SOUND_TYPE_USER");
	case FMOD_SOUND_TYPE_WAV:
		return ("FMOD_SOUND_TYPE_WAV");
	case FMOD_SOUND_TYPE_XM:
		return ("FMOD_SOUND_TYPE_XM");
	case FMOD_SOUND_TYPE_XMA:
		return ("FMOD_SOUND_TYPE_XMA");
	case FMOD_SOUND_TYPE_AUDIOQUEUE:
		return ("FMOD_SOUND_TYPE_AUDIOQUEUE");
	case FMOD_SOUND_TYPE_AT9:
		return ("FMOD_SOUND_TYPE_AT9");
	case FMOD_SOUND_TYPE_VORBIS:
		return ("FMOD_SOUND_TYPE_VORBIS");
	case FMOD_SOUND_TYPE_MEDIA_FOUNDATION:
		return ("FMOD_SOUND_TYPE_MEDIA_FOUNDATION");
	case FMOD_SOUND_TYPE_MEDIACODEC:
		return ("FMOD_SOUND_TYPE_MEDIACODEC");
	case FMOD_SOUND_TYPE_FADPCM:
		return ("FMOD_SOUND_TYPE_FADPCM");

	default:
		return std::string("Unknown type");
	}

}


std::ostream& operator<<(std::ostream& stream, const cAudio_Sound_FMOD& val)
{
	// Todo - Dump the system information
	return stream;
}