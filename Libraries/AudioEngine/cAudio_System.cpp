#include "cAudio_System.h"
#include "cAudio_System_impl.h"
#include <cassert>

cAudio_System_impl* g_Audio_System_impl;		// The one and only


cAudio_System::cAudio_System()
{
	g_Audio_System_impl = new cAudio_System_impl();
}

cAudio_System::~cAudio_System()
{
	//if (g_Audio_System_impl)
	//	delete g_Audio_System_impl;
	//g_Audio_System_impl
}

// Init/Close.
void cAudio_System::Init(int maxchannels, iAudio_System::InitFlags flags)
{
	assert(g_Audio_System_impl);
	g_Audio_System_impl->Init(maxchannels, flags);
}

void cAudio_System::Close()
{
	assert(g_Audio_System_impl);
	g_Audio_System_impl->Close();
	delete g_Audio_System_impl;
	g_Audio_System_impl = 0;
}

void cAudio_System::Update()
{
	assert(g_Audio_System_impl);
	g_Audio_System_impl->Update();
}

iAudio_System* cAudio_System::Get_impl()
{
	return g_Audio_System_impl;
}
