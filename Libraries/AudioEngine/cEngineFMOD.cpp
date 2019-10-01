#include "cEngineFMOD.h"
#include "../Managers/GameLibrary/AssetGroups.h"
#include <iostream>
#include <sstream>

#include <windows.h>

namespace audioFMOD
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
		pan = 0.0f; //check documentation for pan allowed values
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

	void AudioItem::replay()
	{
		result = _system->playSound(sound, 0, is_paused, &channel);
		errorCheck(result);
	}

	std::string AudioItem::get_name() {
		char buf[1024];
		if (sound) {
			result = sound->getName(buf, 1024);
			errorCheck(result);
		}
		std::string ret(buf);
		return ret;
	}

	std::string AudioItem::get_format_string(FMOD_SOUND_FORMAT in)
	{
		switch (in)
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
	std::string  AudioItem::get_type_string(FMOD_SOUND_TYPE type)
	{
		switch (type)
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

	AudioItem::format AudioItem::get_format() {
		format out;
		if (sound) {
			result = sound->getFormat(&out.type, &out.format, &out.channels, &out.bits);
			errorCheck(result);
		}
		return out;
	}

	//getFormat(FMOD_SOUND_TYPE* type, FMOD_SOUND_FORMAT* format, int* channels, int* bits);

	float AudioItem::get_volume() {
		if (channel) {
			result = channel->getVolume(&volume);
			errorCheck(result);
		}

		return volume;
	}

	void AudioItem::set_volume(float newVol) {
		if (channel) {
			volume = newVol;
			result = channel->setVolume(volume);
			errorCheck(result);
		}
	}

	float AudioItem::get_pitch() {
		if (channel) {
			result = channel->getPitch(&pitch);
			errorCheck(result);
		}

		return pitch;
	}

	void AudioItem::set_pitch(float in) {
		if (channel) {
			pitch = in;
			result = channel->setPitch(pitch);
			errorCheck(result);
		}
	}

	float AudioItem::get_pan() {
		return pan;
	}

	void AudioItem::set_pan(float in)
	{
		if (channel) {
			if (pan < -1)
				pan = -1;
			if (pan > 1)
				pan = 1;
			pan = in;
			result = channel->setPitch(pan);
			errorCheck(result);
		}
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
