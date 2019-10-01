#pragma once

#include "iAudio_System.h"

class cAudio_System : public iAudio_System
{
public:
	cAudio_System();								// Singleton so private
	virtual ~cAudio_System();

	// Init/Close.
	typedef FMOD_INITFLAGS InitFlags;
	virtual void Init(int maxchannels, iAudio_System::InitFlags = FMOD_INIT_NORMAL);
	virtual void Close();

	virtual void Update();

	// Allow access to the impl
	iAudio_System* Get_impl();						// For now pass back  imple for more functionality
};
