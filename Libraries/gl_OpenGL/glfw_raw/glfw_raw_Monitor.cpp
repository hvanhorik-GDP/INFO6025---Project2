
#include "glfw_raw_Monitor.h"
#include "glfw_raw_Window.h"
#include <gl/GlCommon.h>
#include <cassert>

namespace glfw
{
	namespace raw
	{
		namespace Monitor
		{

			union uGamraymap
			{
				const gammaramp* raw;
				const GLFWgammaramp* glfw;
			};
			union uVidmode
			{
				const vidmode* raw;
				const GLFWvidmode* glfw;
			};

			static monitorfun* gCallback = 0;			// Store global joystick function
//			static bool gSet = false;	// Save the global function
//			typedef void (*monitorfun)(monitor*, int);
			static void sCallback(monitor* mon, int event)
			{
				assert(untested);
				assert(gCallback != NULL);
				assert(mon != NULL);
				if (gCallback)
				{
					// Map method calls via a union
					union {
						int glfw;
						eEvent raw;
					} uEvent;

					// todo - ensure that event is valid

					uEvent.glfw = event;
					(*gCallback)(mon, uEvent.raw);
				}
			}

			monitorfun SetMonitorCallback(monitorfun cbfun)
			{
				assert(untested);
				static bool gCallbackSet = false;
				gCallback = &cbfun;
				if (gCallbackSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetMonitorCallback(sCallback);
					gCallbackSet = true;
				}
				return cbfun;
			}

			const char* GetMonitorName(monitor* monitor)
			{
				assert(untested);
				assert(monitor != NULL);
				assert(monitor != NULL);
				const char* ret = glfwGetMonitorName(monitor);
				assert(ret != NULL);
				return ret;
			}

			const gammaramp* GetGammaRamp(monitor* monitor)
			{
				assert(untested);
				assert(monitor != NULL);
				assert(sizeof(gammaramp) == sizeof(GLFWgammaramp));
				uGamraymap uData;
				uData.glfw = glfwGetGammaRamp(monitor);
				assert(uData.glfw != NULL);
				return uData.raw;
			}

			const vidmode* GetVideoMode(monitor* monitor)
			{
				assert(untested);
				assert(monitor != NULL);
				assert(sizeof(vidmode) == sizeof(GLFWvidmode));
				uVidmode uData;
				uData.glfw = glfwGetVideoMode(monitor);
				assert(uData.glfw != NULL);
				return uData.raw;
				assert(untested);
				return uData.raw;
			}

			const vidmode* GetVideoModes(monitor* monitor, int* count)
			{
				assert(untested);
				assert(monitor != NULL);
				assert(count != NULL);
				assert(sizeof(vidmode) == sizeof(GLFWvidmode));
				uVidmode uData;
				uData.glfw = glfwGetVideoModes(monitor, count);
				assert(uData.glfw != NULL);
				return uData.raw;
				assert(untested);
				return uData.raw;
			}

			void GetMonitorPhysicalSize(monitor* monitor, int* widthMM, int* heightMM)
			{
				assert(untested);
				assert(monitor != NULL);
				assert(widthMM != NULL);
				assert(heightMM != NULL);
				glfwGetMonitorPhysicalSize(monitor, widthMM, heightMM);
			}

			void GetMonitorPos(monitor* monitor, int* xpos, int* ypos)
			{
				assert(untested);
				assert(monitor != NULL);
				assert(xpos != NULL);
				assert(ypos != NULL);
				glfwGetMonitorPos(monitor, xpos, ypos);
				}

			void SetGamma(monitor* monitor, float gamma)
			{
				assert(untested);
				assert(monitor != NULL);
				glfwSetGamma(monitor, gamma);
			}

			void SetGammaRamp(monitor* monitor, const gammaramp* ramp)
			{
//				assert(untested);
				assert(monitor != NULL);
				assert(ramp != NULL);

				assert(sizeof(gammaramp) == sizeof(GLFWgammaramp) );
				uGamraymap uData;
				uData.raw = ramp;

				glfwSetGammaRamp(monitor, uData.glfw);
			}



		}
	}
}