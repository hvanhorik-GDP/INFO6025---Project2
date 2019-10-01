#pragma once
#include <fmod/fmod.hpp>
#include <ostream>

class cAudio_Channel_FMOD
{
public:
	cAudio_Channel_FMOD();
	virtual ~cAudio_Channel_FMOD();

	bool isPaused() const;
	void Pause(bool new_is_paused);

	void SetVolume(float newVol);
	float GetVolume() const;
	void SetPitch(float newPitch);
	float GetPitch() const;

	bool isPlaying() const;

	unsigned int GetPosition(FMOD_TIMEUNIT units = FMOD_TIMEUNIT_MS) const;
	void SetPosition(unsigned int pos, FMOD_TIMEUNIT units = FMOD_TIMEUNIT_MS);

	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const cAudio_Channel_FMOD& val);

private:
	FMOD::Channel* m_channel;
	mutable FMOD_RESULT m_result;

	friend class cAudio_System_FMOD;

};
