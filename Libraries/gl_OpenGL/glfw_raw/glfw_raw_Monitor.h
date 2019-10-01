#pragma once
#include "glfw_raw_Common.h"

namespace glfw
{
	namespace raw
	{
		// 
		// Monitor
		//
		namespace Monitor
		{
			struct gammaramp
			{
				unsigned short* red;
				unsigned short* green;
				unsigned short* blue;
				unsigned int size;
			};

			struct vidmode
			{
				int width;
				int height;
				int redBits;
				int greenBits;
				int blueBits;
				int refreshRate;
			};

			enum eEvent
			{
				Connected = 0x00040001,				// GLFW_CONNECTED
				Disconnected = 0x00040002,				// GLFW_DISCONNECTED
			};

			typedef void (*monitorfun)(monitor*, int);
			monitorfun SetMonitorCallback(monitorfun cbfun);

			const char* GetMonitorName(monitor* monitor);
			const gammaramp* GetGammaRamp(monitor* monitor);
			const vidmode* GetVideoMode(monitor* monitor);
			const vidmode* GetVideoModes(monitor* monitor, int* count);
			void GetMonitorPhysicalSize(monitor* monitor, int* widthMM, int* heightMM);
			void GetMonitorPos(monitor* monitor, int* xpos, int* ypos);
			void SetGamma(monitor* monitor, float gamma);
			void SetGammaRamp(monitor* monitor, const gammaramp* ramp);
		}	// Monitor
	}
}