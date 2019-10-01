// Raw methods for gflw System methods

#include <gl/GLCommon.h>		// glfw.h, etc. (openGL.h)
#include "glfw_raw_System.h"
#include <gl/GlCommon.h>
#include <cassert>

namespace glfw
{
	namespace raw
	{
		namespace System
		{
			const char* GetVersionString(void)
			{
				assert(untested);
				return glfwGetVersionString();
			}

			const char** GetRequiredInstanceExtensions(uint32_t* count)
			{
				assert(count != NULL);
				assert(untested);
				return glfwGetRequiredInstanceExtensions(count);
			}

			double GetTime(void)
			{
				assert(untested);
				return glfwGetTime();
			}

			glproc GetProcAddress(const char* procname)
			{
				assert(procname != NULL);
				return glfwGetProcAddress(procname);
			}

			int ExtensionSupported(const char* extension)
			{
				assert(extension != NULL);
				assert(untested);
				return glfwExtensionSupported(extension);
			}
			int Init(void)
			{
//				assert(untested);
				return glfwInit();
			}

			int VulkanSupported(void)
			{
				assert(untested);
				return glfwVulkanSupported();
			}

			uint64_t GetTimerFrequency(void)
			{
				assert(untested);
				return glfwGetTimerFrequency();
			}

			uint64_t GetTimerValue(void)
			{
				assert(untested);
				return glfwGetTimerValue();
			}

			void GetVersion(int* major, int* minor, int* rev)
			{
				assert(untested);
				assert(major != NULL);
				assert(minor != NULL);
				assert(rev != NULL);
				return glfwGetVersion(major, minor, rev);
			}

			void PollEvents(void)
			{
				glfwPollEvents();
			}

			void PostEmptyEvent(void)
			{
				assert(untested);
				glfwPostEmptyEvent();
			}

			void SetTime(double time)
			{
				assert(untested);
				glfwSetTime(time);
			}

			void SwapInterval(int interval)
			{
//				assert(untested);
				glfwSwapInterval(interval);
			}

			void Terminate(void)
			{
				glfwTerminate();
			}
			void WaitEvents(void)
			{
				assert(untested);
				glfwWaitEvents();
			}

			void WaitEventsTimeout(double timeout)
			{
				assert(untested);
				glfwWaitEventsTimeout(timeout);
			}

			void DefaultWindowHints(void)
			{
				assert(untested);
				glfwDefaultWindowHints();
			}

			void WindowHint(int hint, int value)
			{
				//				assert(untested);
				glfwWindowHint(hint, value);
			}

			monitor* GetPrimaryMonitor(void)
			{
				assert(untested);
				monitor* ret = glfwGetPrimaryMonitor();
				assert(ret != NULL);
				return ret;
			}

			monitor** GetMonitors(int* count)
			{
				assert(untested);
				assert(count != NULL);
				monitor** ret = glfwGetMonitors(count);
				assert(ret != NULL);
				return ret;

			}

			window* CreateWindow(int width, int height, const char* title, monitor* monitor, window* share)
			{
				//				assert(untested);
				GLFWwindow* ret = glfwCreateWindow(width, height, title, monitor, share);
				assert(ret != NULL);
				return ret;

			}

			window* GetCurrentContext(void)
			{
				assert(untested);
				GLFWwindow* ret = glfwGetCurrentContext();
				assert(ret != NULL);
				return ret;
			}
		}
	}
}