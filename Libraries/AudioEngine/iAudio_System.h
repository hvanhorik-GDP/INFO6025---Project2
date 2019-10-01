#pragma once
#include <fmod/fmod.hpp>

class c_Audio_System_impl;

class iAudio_System
{
public:
	iAudio_System() {}
	virtual ~iAudio_System() {}

	// Init/Close.
	typedef FMOD_INITFLAGS InitFlags;
	virtual void Init(int maxchannels, iAudio_System::InitFlags) = 0;
	virtual void Close() = 0;

	virtual void Update() = 0;						  /* IMPORTANT! CALL THIS ONCE PER FRAME! */
};
