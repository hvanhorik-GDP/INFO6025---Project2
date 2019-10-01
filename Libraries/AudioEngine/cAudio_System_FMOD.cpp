#include "cAudio_System_FMOD.h"
#include "c_Audio_Exception_FMOD.h"
#include "cAudio_Sound_FMOD.h"
#include <exception>
#include <sstream>
#include <cassert>


cAudio_System_FMOD::cAudio_System_FMOD()
{
}

cAudio_System_FMOD::~cAudio_System_FMOD()
{
	if (m_system)
	{
		// No Error checking during destruction
		if (m_isInit)
		{
			m_result = m_system->close();
		}
		m_result = m_system->release();
	}
}


void cAudio_System_FMOD::Init(int maxchannels, iAudio_System::InitFlags flags)
{
	m_result = FMOD::System_Create(&m_system);
	c_Audio_Exception_FMOD::throwIfError(m_result);

	m_result = m_system->init(maxchannels, flags, NULL);
	c_Audio_Exception_FMOD::throwIfError(m_result);
	m_isInit = true;
}

 void cAudio_System_FMOD::Close()
 {
	 if (m_system) {
		 if (m_isInit)
		 {
			 m_result = m_system->close();
			 c_Audio_Exception_FMOD::throwIfError(m_result);
		 }
		 m_isInit = false;
		 m_result = m_system->release();
		 c_Audio_Exception_FMOD::throwIfError(m_result);
	 }
 }


 void cAudio_System_FMOD::Update()
 {
	 assert(m_system != NULL);
	 if (m_system)
	 {
		 m_result = m_system->update();
		 c_Audio_Exception_FMOD::throwIfError(m_result);
	 }
 }


 cAudio_System_FMOD::sCPUUsage cAudio_System_FMOD::GetCPUUsage() const
 {
	 cAudio_System_FMOD::sCPUUsage cpu;
	 assert(m_system);
	 if (m_system)
	 {
		 m_result = m_system->getCPUUsage(&cpu.dsp, &cpu.stream, &cpu.geometry, &cpu.update, &cpu.total);
		 c_Audio_Exception_FMOD::throwIfError(m_result);
	 }
	 return cpu;
 }

 void cAudio_System_FMOD::CreateSound(cAudio_Sound_FMOD& sound, const std::string path, FMOD_MODE mode)
 {
	 assert(m_system);
	 if (m_system)
	 {
		 m_result = m_system->createSound(path.c_str(), mode, 0, &sound.m_sound);
		 c_Audio_Exception_FMOD::throwIfError(m_result);
	 }
 }

 void cAudio_System_FMOD::PlaySound(const cAudio_Sound_FMOD& sound, cAudio_Channel_FMOD& channel)
 {
	 assert(m_system);
	 if (m_system)
	 {
		 // TODO ChannelGroup
		 FMOD::ChannelGroup* group = NULL;
		 m_result = m_system->playSound(sound.m_sound, group, channel.isPaused(), &channel.m_channel);
		 c_Audio_Exception_FMOD::throwIfError(m_result);
	 }
 }

 std::ostream& operator<<(std::ostream& stream, const cAudio_System_FMOD& val)
 {
	 // Todo - Dump the system information
	 return stream;
 }
