#pragma once

#include <cinttypes>

// This is an attempt to put all of the openGL functions in a logical order 
// These will just be flowthrough methods so I can get rid of all OpenGL from my other code
// Note the deep namespace to make it irritating for anyone to actually use these apis.
//

typedef struct GLFWcursor GLFWcursor;
typedef struct GLFWmonitor GFWmonitor;
typedef struct GLFWwindow GLFWwindow;


namespace glfw
{
	namespace raw
	{
		static bool untested = false;

		typedef void (*glproc)(void);
		typedef void (*vkproc)(void);
		typedef struct GLFWmonitor monitor;
		typedef struct GLFWwindow window;
		typedef struct GLFWcursor cursor;
		struct image
		{
			int width;
			int height;
			unsigned char* pixels;
		};

		enum eOther
		{
			VersionMajor = 3,				// GLFW_VERSION_MAJOR
			VersionMinor = 2,				// GLFW_VERSION_MINOR
			VersionRevision = 1,				// GLFW_VERSION_REVISION
			True = 1,				// GLFW_TRUE
			False = 0,				// GLFW_FALSE
			Release = 0,				// GLFW_RELEASE
			Connected = 0x00040001,				// GLFW_CONNECTED
			Disconnected = 0x00040002,				// GLFW_DISCONNECTED
			DontCare = -1,				// GLFW_DONT_CARE
		}; 	// eOther
	}
}
