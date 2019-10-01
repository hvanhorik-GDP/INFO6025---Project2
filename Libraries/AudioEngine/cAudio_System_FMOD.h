#pragma once

#include "iAudio_System.h"
#include "cAudio_Sound_FMOD.h"
#include "cAudio_Channel_FMOD.h"
#include <string>
#include <ostream>

class cAudio_System_FMOD: public iAudio_System
{
public:
	// From iAudio_System
	virtual ~cAudio_System_FMOD();
	virtual void Init(int maxchannels, iAudio_System::InitFlags flags = FMOD_INIT_NORMAL);
	virtual void Close();

	virtual void Update();	

	struct sCPUUsage
	{
		float dsp;
		float stream;
		float geometry;
		float update;
		float total;
	};

	cAudio_System_FMOD::sCPUUsage GetCPUUsage() const;

	typedef FMOD_MODE Mode;
	void CreateSound(cAudio_Sound_FMOD& sound, const std::string path, FMOD_MODE mode);
	void PlaySound(const cAudio_Sound_FMOD& sound, cAudio_Channel_FMOD &channel);

	bool IsInit() { return m_isInit;  }

	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const cAudio_System_FMOD& val);
private:
	friend class cAudio_System;
	cAudio_System_FMOD();				// Private constructor 

	FMOD::System* m_system;
	mutable FMOD_RESULT m_result;
	bool m_isInit = false;
};
//
//// System information
//unsigned int GetVersion() const = 0;
//
//// System information functions.
//FMOD_RESULT F_API getVersion(unsigned int* version);
//FMOD_RESULT F_API getOutputHandle(void** handle);
//FMOD_RESULT F_API getChannelsPlaying(int* channels, int* realchannels = 0);
//FMOD_RESULT F_API getCPUUsage(float* dsp, float* stream, float* geometry, float* update, float* total);
//FMOD_RESULT F_API getFileUsage(long long* sampleBytesRead, long long* streamBytesRead, long long* otherBytesRead);



//FMOD_RESULT F_API setOutput(FMOD_OUTPUTTYPE output);
//FMOD_RESULT F_API getOutput(FMOD_OUTPUTTYPE* output);
//FMOD_RESULT F_API getNumDrivers(int* numdrivers);
//FMOD_RESULT F_API getDriverInfo(int id, char* name, int namelen, FMOD_GUID* guid, int* systemrate, FMOD_SPEAKERMODE* speakermode, int* speakermodechannels);
//FMOD_RESULT F_API setDriver(int driver);
//FMOD_RESULT F_API getDriver(int* driver);
//FMOD_RESULT F_API setSoftwareChannels(int numsoftwarechannels);
//FMOD_RESULT F_API getSoftwareChannels(int* numsoftwarechannels);
//FMOD_RESULT F_API setSoftwareFormat(int samplerate, FMOD_SPEAKERMODE speakermode, int numrawspeakers);
//FMOD_RESULT F_API getSoftwareFormat(int* samplerate, FMOD_SPEAKERMODE* speakermode, int* numrawspeakers);
//FMOD_RESULT F_API setDSPBufferSize(unsigned int bufferlength, int numbuffers);
//FMOD_RESULT F_API getDSPBufferSize(unsigned int* bufferlength, int* numbuffers);
//FMOD_RESULT F_API setFileSystem(FMOD_FILE_OPEN_CALLBACK useropen, FMOD_FILE_CLOSE_CALLBACK userclose, FMOD_FILE_READ_CALLBACK userread, FMOD_FILE_SEEK_CALLBACK userseek, FMOD_FILE_ASYNCREAD_CALLBACK userasyncread, FMOD_FILE_ASYNCCANCEL_CALLBACK userasynccancel, int blockalign);
//FMOD_RESULT F_API attachFileSystem(FMOD_FILE_OPEN_CALLBACK useropen, FMOD_FILE_CLOSE_CALLBACK userclose, FMOD_FILE_READ_CALLBACK userread, FMOD_FILE_SEEK_CALLBACK userseek);
//FMOD_RESULT F_API setAdvancedSettings(FMOD_ADVANCEDSETTINGS* settings);
//FMOD_RESULT F_API getAdvancedSettings(FMOD_ADVANCEDSETTINGS* settings);
//FMOD_RESULT F_API setCallback(FMOD_SYSTEM_CALLBACK callback, FMOD_SYSTEM_CALLBACK_TYPE callbackmask = FMOD_SYSTEM_CALLBACK_ALL);
//
//// Plug-in support.
//FMOD_RESULT F_API setPluginPath(const char* path);
//FMOD_RESULT F_API loadPlugin(const char* filename, unsigned int* handle, unsigned int priority = 0);
//FMOD_RESULT F_API unloadPlugin(unsigned int handle);
//FMOD_RESULT F_API getNumNestedPlugins(unsigned int handle, int* count);
//FMOD_RESULT F_API getNestedPlugin(unsigned int handle, int index, unsigned int* nestedhandle);
//FMOD_RESULT F_API getNumPlugins(FMOD_PLUGINTYPE plugintype, int* numplugins);
//FMOD_RESULT F_API getPluginHandle(FMOD_PLUGINTYPE plugintype, int index, unsigned int* handle);
//FMOD_RESULT F_API getPluginInfo(unsigned int handle, FMOD_PLUGINTYPE* plugintype, char* name, int namelen, unsigned int* version);
//FMOD_RESULT F_API setOutputByPlugin(unsigned int handle);
//FMOD_RESULT F_API getOutputByPlugin(unsigned int* handle);
//FMOD_RESULT F_API createDSPByPlugin(unsigned int handle, DSP** dsp);
//FMOD_RESULT F_API getDSPInfoByPlugin(unsigned int handle, const FMOD_DSP_DESCRIPTION** description);
//FMOD_RESULT F_API registerCodec(FMOD_CODEC_DESCRIPTION* description, unsigned int* handle, unsigned int priority = 0);
//FMOD_RESULT F_API registerDSP(const FMOD_DSP_DESCRIPTION* description, unsigned int* handle);
//FMOD_RESULT F_API registerOutput(const FMOD_OUTPUT_DESCRIPTION* description, unsigned int* handle);
//
//////////// Init/Close.
//////////FMOD_RESULT F_API init(int maxchannels, FMOD_INITFLAGS flags, void* extradriverdata);
//////////FMOD_RESULT F_API close();
//////////
//// General post-init system functions.
//FMOD_RESULT F_API update();        /* IMPORTANT! CALL THIS ONCE PER FRAME! */
//
//FMOD_RESULT F_API setSpeakerPosition(FMOD_SPEAKER speaker, float x, float y, bool active);
//FMOD_RESULT F_API getSpeakerPosition(FMOD_SPEAKER speaker, float* x, float* y, bool* active);
//FMOD_RESULT F_API setStreamBufferSize(unsigned int filebuffersize, FMOD_TIMEUNIT filebuffersizetype);
//FMOD_RESULT F_API getStreamBufferSize(unsigned int* filebuffersize, FMOD_TIMEUNIT* filebuffersizetype);
//FMOD_RESULT F_API set3DSettings(float dopplerscale, float distancefactor, float rolloffscale);
//FMOD_RESULT F_API get3DSettings(float* dopplerscale, float* distancefactor, float* rolloffscale);
//FMOD_RESULT F_API set3DNumListeners(int numlisteners);
//FMOD_RESULT F_API get3DNumListeners(int* numlisteners);
//FMOD_RESULT F_API set3DListenerAttributes(int listener, const FMOD_VECTOR* pos, const FMOD_VECTOR* vel, const FMOD_VECTOR* forward, const FMOD_VECTOR* up);
//FMOD_RESULT F_API get3DListenerAttributes(int listener, FMOD_VECTOR* pos, FMOD_VECTOR* vel, FMOD_VECTOR* forward, FMOD_VECTOR* up);
//FMOD_RESULT F_API set3DRolloffCallback(FMOD_3D_ROLLOFF_CALLBACK callback);
//FMOD_RESULT F_API mixerSuspend();
//FMOD_RESULT F_API mixerResume();
//FMOD_RESULT F_API getDefaultMixMatrix(FMOD_SPEAKERMODE sourcespeakermode, FMOD_SPEAKERMODE targetspeakermode, float* matrix, int matrixhop);
//FMOD_RESULT F_API getSpeakerModeChannels(FMOD_SPEAKERMODE mode, int* channels);
//
//// System information functions.
//FMOD_RESULT F_API getVersion(unsigned int* version);
//FMOD_RESULT F_API getOutputHandle(void** handle);
//FMOD_RESULT F_API getChannelsPlaying(int* channels, int* realchannels = 0);
//FMOD_RESULT F_API getCPUUsage(float* dsp, float* stream, float* geometry, float* update, float* total);
//FMOD_RESULT F_API getFileUsage(long long* sampleBytesRead, long long* streamBytesRead, long long* otherBytesRead);
//
//// Sound/DSP/Channel/FX creation and retrieval.
//FMOD_RESULT F_API createSound(const char* name_or_data, FMOD_MODE mode, FMOD_CREATESOUNDEXINFO* exinfo, Sound** sound);
//FMOD_RESULT F_API createStream(const char* name_or_data, FMOD_MODE mode, FMOD_CREATESOUNDEXINFO* exinfo, Sound** sound);
//FMOD_RESULT F_API createDSP(const FMOD_DSP_DESCRIPTION* description, DSP** dsp);
//FMOD_RESULT F_API createDSPByType(FMOD_DSP_TYPE type, DSP** dsp);
//FMOD_RESULT F_API createChannelGroup(const char* name, ChannelGroup** channelgroup);
//FMOD_RESULT F_API createSoundGroup(const char* name, SoundGroup** soundgroup);
//FMOD_RESULT F_API createReverb3D(Reverb3D** reverb);
//
//FMOD_RESULT F_API playSound(Sound* sound, ChannelGroup* channelgroup, bool paused, Channel** channel);
//FMOD_RESULT F_API playDSP(DSP* dsp, ChannelGroup* channelgroup, bool paused, Channel** channel);
//FMOD_RESULT F_API getChannel(int channelid, Channel** channel);
//FMOD_RESULT F_API getMasterChannelGroup(ChannelGroup** channelgroup);
//FMOD_RESULT F_API getMasterSoundGroup(SoundGroup** soundgroup);
//
//// Routing to ports.
//FMOD_RESULT F_API attachChannelGroupToPort(FMOD_PORT_TYPE portType, FMOD_PORT_INDEX portIndex, ChannelGroup* channelgroup, bool passThru = false);
//FMOD_RESULT F_API detachChannelGroupFromPort(ChannelGroup* channelgroup);
//
//// Reverb API.
//FMOD_RESULT F_API setReverbProperties(int instance, const FMOD_REVERB_PROPERTIES* prop);
//FMOD_RESULT F_API getReverbProperties(int instance, FMOD_REVERB_PROPERTIES* prop);
//
//// System level DSP functionality.
//FMOD_RESULT F_API lockDSP();
//FMOD_RESULT F_API unlockDSP();
//
//// Recording API.
//FMOD_RESULT F_API getRecordNumDrivers(int* numdrivers, int* numconnected);
//FMOD_RESULT F_API getRecordDriverInfo(int id, char* name, int namelen, FMOD_GUID* guid, int* systemrate, FMOD_SPEAKERMODE* speakermode, int* speakermodechannels, FMOD_DRIVER_STATE* state);
//FMOD_RESULT F_API getRecordPosition(int id, unsigned int* position);
//FMOD_RESULT F_API recordStart(int id, Sound* sound, bool loop);
//FMOD_RESULT F_API recordStop(int id);
//FMOD_RESULT F_API isRecording(int id, bool* recording);
//
//// Geometry API.
//FMOD_RESULT F_API createGeometry(int maxpolygons, int maxvertices, Geometry** geometry);
//FMOD_RESULT F_API setGeometrySettings(float maxworldsize);
//FMOD_RESULT F_API getGeometrySettings(float* maxworldsize);
//FMOD_RESULT F_API loadGeometry(const void* data, int datasize, Geometry** geometry);
//FMOD_RESULT F_API getGeometryOcclusion(const FMOD_VECTOR* listener, const FMOD_VECTOR* source, float* direct, float* reverb);
//
//// Network functions.
//FMOD_RESULT F_API setNetworkProxy(const char* proxy);
//FMOD_RESULT F_API getNetworkProxy(char* proxy, int proxylen);
//FMOD_RESULT F_API setNetworkTimeout(int timeout);
//FMOD_RESULT F_API getNetworkTimeout(int* timeout);
//
//// Userdata set/get.
//FMOD_RESULT F_API setUserData(void* userdata);
//FMOD_RESULT F_API getUserData(void** userdata);
