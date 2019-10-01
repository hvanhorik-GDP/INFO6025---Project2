#pragma once

#include "glfw_raw_Common.h"

namespace glfw
{
	namespace raw
	{
		//
		// System
		//
		namespace System
		{
			const char* GetVersionString(void);
			const char** GetRequiredInstanceExtensions(uint32_t* count);
			double GetTime(void);
			glproc GetProcAddress(const char* procname);
			int ExtensionSupported(const char* extension);
			int Init(void);
			int VulkanSupported(void);
			uint64_t GetTimerFrequency(void);
			uint64_t GetTimerValue(void);
			//				vkproc GetInstanceProcAddress(VkInstance instance, const char* procname);
			void GetVersion(int* major, int* minor, int* rev);
			void PollEvents(void);
			void PostEmptyEvent(void);
			void SetTime(double time);
			void SwapInterval(int interval);
			void Terminate(void);
			void WaitEvents(void);
			void WaitEventsTimeout(double timeout);
			void WindowHint(int hint, int value);
			void DefaultWindowHints(void);
			monitor* GetPrimaryMonitor(void);
			monitor** GetMonitors(int* count);
			window* CreateWindow(int width, int height, const char* title, monitor* monitor, window* share);
			window* GetCurrentContext(void);
		}	 // System
	}
}
