#include "glfw_raw_Joystick.h"
#include <gl/GlCommon.h>
#include <cassert>


namespace glfw
{
	namespace raw
	{
		namespace Joystick
		{
			// Map method calls via a union
			union uJid{
				int glfw;
				eJoystick raw;
			};

			union uEvent {
				int glfw;
				eEvent raw;
			};

			static joystickfun* gCallback = 0;			// Store global joystick function
			static bool gSet = false;	// Save the global function
			// This is the global joystick callback function
			// calls the 
			static void sCallback(int jid, int event)	
			{
				assert(untested);
				assert(gCallback != NULL);
				if (gCallback)
				{
					// todo - ensure that jid and event are valid

					uJid jidData;
					uEvent eventData;

					jidData.glfw = jid;
					eventData.glfw = event;
					(*gCallback)(jidData.raw, eventData.raw);
				}
			}

			joystickfun SetJoystickCallback(joystickfun cbfun)
			{
				assert(untested);
				gCallback = &cbfun;
				if (gSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetJoystickCallback(sCallback);
					gSet = true;
				}
				return cbfun;
			}

			const char* Joystick::GetJoystickName(Joystick::eJoystick joy)
			{
				assert(untested);
				const char* stick = glfwGetJoystickName(joy);
				assert(stick != NULL);
				return stick;
			}
			const float* GetJoystickAxes(eJoystick joy, int* count)
			{
				assert(untested);
				assert(count != NULL);
				const float* ret = glfwGetJoystickAxes(joy, count);
				assert(ret != NULL);
				return ret;
			}
			const unsigned char* GetJoystickButtons(eJoystick joy, int* count)
			{
				assert(untested);
				assert(count != NULL);
				const unsigned char* ret = glfwGetJoystickButtons(joy, count);
				assert(ret != NULL);
				return ret;
			}
			int JoystickPresent(eJoystick joy)
			{
				assert(untested);
				return glfwJoystickPresent(joy);
			}
		}
	}
}

