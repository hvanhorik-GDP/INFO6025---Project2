#include "glfw_raw_Error.h"
#include <gl/GlCommon.h>
#include <cassert>


namespace glfw
{
	namespace raw
	{
		namespace Error
		{
			// Map method calls via a union
			union uError {
				int glfw;
				eError raw;
			};

			errorfun* gCallback = 0;			// Store global joystick function
			bool gSet = false;	// Save the global function
			// This is the global joystick callback function
			// calls the 
			static void sCallback(int err, const char* text)
			{
//				assert(untested);
				assert(gCallback);
				if (gCallback)
				{

					// todo - ensure that jid and event are valid
					uError uData;

					uData.glfw = err;
					(*gCallback)(uData.raw, text);
				}
			}
			
			errorfun SetErrorCallback(errorfun cbfun)
			{
//				assert(untested);
				gCallback = &cbfun;
				if (!gSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetErrorCallback(sCallback);
					gSet = true;
				}
				return cbfun;
			}

		}
	}
}
