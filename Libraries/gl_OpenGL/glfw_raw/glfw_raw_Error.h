#pragma once

#include "glfw_raw_Common.h"

namespace glfw
{
	namespace raw
	{
		namespace Error
		{
			enum eError
			{
				NotInitialized = 0x00010001,				// GLFW_NOT_INITIALIZED
				NoCurrentContext = 0x00010002,				// GLFW_NO_CURRENT_CONTEXT
				InvalidEnum = 0x00010003,				// GLFW_INVALID_ENUM
				InvalidValue = 0x00010004,				// GLFW_INVALID_VALUE
				OutOfMemory = 0x00010005,				// GLFW_OUT_OF_MEMORY
				ApiUnavailable = 0x00010006,				// GLFW_API_UNAVAILABLE
				VersionUnavailable = 0x00010007,				// GLFW_VERSION_UNAVAILABLE
				PlatformError = 0x00010008,				// GLFW_PLATFORM_ERROR
				FormatUnavailable = 0x00010009,				// GLFW_FORMAT_UNAVAILABLE
				NoWindowContext = 0x0001000A,				// GLFW_NO_WINDOW_CONTEXT
			}; // eError
			typedef void (*errorfun)(eError err, const char* txt);
			errorfun SetErrorCallback(errorfun cbfun);
		}
	}
}
