#include "glfw_raw_Window.h"
#include <gl/GlCommon.h>
#include <cassert>


namespace glfw
{
	namespace raw
	{
		namespace Window
		{
			int GetInputMode(window* window, int mode)
			{
				assert(untested);
				assert(window);
				return glfwGetInputMode(window, mode);
			}

			int GetKey(window* window, int key)
			{
				assert(untested);
				assert(window);
				return glfwGetKey(window, key);
			}

			int GetMouseButton(window* window, int button)
			{
				assert(untested);
				assert(window);
				return glfwGetMouseButton(window, button);
			}

			int GetWindowAttrib(window* window, int attrib)
			{
				assert(untested);
				assert(window);
				return glfwGetWindowAttrib(window, attrib);
			}

			int WindowShouldClose(window* window)
			{
//				assert(untested);
				assert(window);
				return glfwWindowShouldClose(window);
			}

			monitor* GetWindowMonitor(window* window)
			{
				assert(untested);
				assert(window);
				return glfwGetWindowMonitor(window);

			}

			void DestroyWindow(window* window)
			{
				assert(window);
				glfwDestroyWindow(window);
			}

			void FocusWindow(window* window)
			{
				assert(untested);
				assert(window);
				glfwFocusWindow(window);
			}

			void GetCursorPos(window* window, double* xpos, double* ypos)
			{
				assert(untested);
				assert(window);
				assert(xpos);
				assert(ypos);
				glfwGetCursorPos(window, xpos, ypos);

			}

			void GetFramebufferSize(window* window, int* width, int* height)
			{
				assert(untested);
				assert(window);
				assert(width);
				assert(height);
				glfwGetFramebufferSize(window, width, height);
			}

			void GetWindowFrameSize(window* window, int* left, int* top, int* right, int* bottom)
			{
				assert(untested);
				assert(window);
				assert(left);
				assert(top);
				assert(right);
				assert(bottom);
				glfwGetWindowFrameSize(window, left, top, right, bottom);
			}

			void GetWindowPos(window* window, int* xpos, int* ypos)
			{
				assert(untested);
				assert(window);
				assert(xpos);
				assert(ypos);
				glfwGetWindowPos(window, xpos, ypos);
			}

			void GetWindowSize(window* window, int* width, int* height)
			{
				assert(untested);
				assert(window);
				assert(width);
				assert(height);
				glfwGetWindowSize(window, width, height);
			}

			void HideWindow(window* window)
			{
				assert(untested);
				assert(window);
				glfwHideWindow(window);

			}

			void IconifyWindow(window* window)
			{
				assert(untested);
				assert(window);
				glfwIconifyWindow(window);
			}

			void MakeContextCurrent(window* window)
			{
				assert(window);
				glfwMakeContextCurrent(window);
			}

			void MaximizeWindow(window* window)
			{
				assert(untested);
				assert(window);
				glfwMaximizeWindow(window);
			}

			void RestoreWindow(window* window)
			{
				assert(untested);
				assert(window);
				glfwRestoreWindow(window);
			}

			void SetClipboardString(window* window, const char* string)
			{
				assert(untested);
				assert(window);
				assert(string);
				glfwSetClipboardString(window, string);
			}

			void SetCursor(window* window, cursor* cursor)
			{
				assert(untested);
				assert(window);
				assert(cursor);
				glfwSetCursor(window, cursor);
			}

			void SetCursorPos(window* window, double xpos, double ypos)
			{
				assert(untested);
				assert(window);
				glfwSetCursorPos(window, xpos, ypos);
			}

			void SetInputMode(window* window, int mode, int value)
			{
				assert(untested);
				assert(window);
				glfwSetInputMode(window, mode, value);
			}

			void SetWindowAspectRatio(window* window, int numer, int denom)
			{
				assert(untested);
				assert(window);
				glfwSetWindowAspectRatio(window, numer, denom);
			}

			void SetWindowIcon(window* window, int count, const image* images)
			{
				assert(untested);
				assert(window);
				assert(images);
				GLFWimage newimage = { images->width, images->height, images->pixels };
				glfwSetWindowIcon(window, count, &newimage);
			}

			void SetWindowMonitor(window* window, monitor* monitor, int xpos, int ypos, int width, int height, int refreshRate)
			{
				assert(untested);
				assert(window);
				assert(monitor);
				glfwSetWindowMonitor(window, monitor, xpos, ypos, width, height, refreshRate);
			}

			void SetWindowPos(window* window, int xpos, int ypos)
			{
				assert(untested);
				assert(window);
				glfwSetWindowPos(window, xpos, ypos);
			}

			void SetWindowShouldClose(window* window, int value)
			{
				assert(untested);
				assert(window);
				glfwSetWindowShouldClose(window, value);
			}

			void SetWindowSize(window* window, int width, int height)
			{
				assert(untested);
				assert(window);
				glfwSetWindowSize(window, width, height);

			}

			void SetWindowSizeLimits(window* window, int minwidth, int minheight, int maxwidth, int maxheight)
			{
				assert(untested);
				assert(window);
				glfwSetWindowSizeLimits(window, minwidth, minheight, maxwidth, maxheight);
			}

			void SetWindowTitle(window* window, const char* title)
			{
				assert(untested);
				assert(window);
				assert(title);
				glfwSetWindowTitle(window, title);
			}

			void SetWindowUserPointer(window* window, void* pointer)
			{
				assert(untested);
				assert(window);
				assert(pointer);
				glfwSetWindowUserPointer(window, pointer);
			}

			void ShowWindow(window* window)
			{
				assert(untested);
				assert(window);
				glfwShowWindow(window);
			}

			void SwapBuffers(window* window)
			{
				assert(window);
				glfwSwapBuffers(window);
			}

			void* GetWindowUserPointer(window* window)
			{
				assert(untested);
				assert(window);
				void* ret = glfwGetWindowUserPointer(window);
				assert(ret);
				return ret;

			}

			//charmodsfun SetCharModsCallback(window* window, charmodsfun cbfun);
			//typedef void (*charmodsfun)(window* window, unsigned int codepoint, int mods);
			static charmodsfun* g_SetCharModsCallback = 0;
			static void s_SetCharModsCallback(window* window, unsigned int codepoint, int mods)
			{
				assert(untested);
				assert(g_SetCharModsCallback );
				if (g_SetCharModsCallback)
				{
					// todo - ensure that jid and event are valid
					(*g_SetCharModsCallback)(window, codepoint, mods);
				}
			}

			charmodsfun
				SetCharModsCallback(window* window, charmodsfun cbfun)
			{
				static bool bFunctionSet = false;
				assert(untested);
				g_SetCharModsCallback = &cbfun;
				if (!bFunctionSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetCharModsCallback(window, s_SetCharModsCallback);
					bFunctionSet = true;
				}
				return cbfun;
			}

			//typedef void (*charfun)(window* window, unsigned int codepoint);
			//charfun SetCharCallback(GLFWwindow* window, GLFWcharfun cbfun);
			static charfun* g_SetCharCallback = 0;
			static void s_SetCharCallback(window* window, unsigned int codepoint)
			{
				assert(untested);
				assert(g_SetCharCallback);
				if (g_SetCharCallback)
				{
					// todo - ensure that jid and event are valid
					(*g_SetCharCallback)(window, codepoint);
				}
			}

			charfun
				SetCharCallback(window* window, charfun cbfun)
			{
				static bool bFunctionSet = false;
				assert(untested);
				g_SetCharCallback = &cbfun;
				if (!bFunctionSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetCharCallback(window, s_SetCharCallback);
					bFunctionSet = true;
				}
				return cbfun;
			}



			//			windowsizefun SetWindowSizeCallback(window* window, windowsizefun cbfun);
			// typedef void (*windowsizefun)(window*, int height, int width);
			static windowsizefun* g_SetWindowSizeCallback = 0;
			static void s_SetWindowSizeCallback(window* window, int width, int height)
			{
				assert(untested);
				assert(g_SetWindowSizeCallback);
				if (g_SetWindowSizeCallback)
				{
					// todo - ensure that jid and event are valid
					(*g_SetWindowSizeCallback)(window, width, height);
				}
			}

			windowsizefun
				SetWindowSizeCallback(window* window, windowsizefun cbfun)
			{
				static bool bFunctionSet = false;
				assert(untested);
				g_SetWindowSizeCallback = &cbfun;
				if (!bFunctionSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetWindowSizeCallback(window, s_SetWindowSizeCallback);
					bFunctionSet = true;
				}
				return cbfun;
			}


//			typedef void (*framebuffersizefun)(window*, int width, int height);
//			framebuffersizefun SetFramebufferSizeCallback(window* window, framebuffersizefun cbfun);
			framebuffersizefun* g_SetFramebufferSizeCallback = 0;
			static void s_SetFramebufferSizeCallback(window* window, int width, int height)
			{
				assert(untested);
				assert(g_SetFramebufferSizeCallback);
				if (g_SetFramebufferSizeCallback)
				{
					// todo - ensure that jid and event are valid
					(*g_SetFramebufferSizeCallback)(window, width, height);
				}
			}

			framebuffersizefun
				SetFramebufferSizeCallback(window* window, framebuffersizefun cbfun)
			{
				static bool bFunctionSet = false;
				assert(untested);
				g_SetFramebufferSizeCallback = &cbfun;
				if (!bFunctionSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetFramebufferSizeCallback(window, s_SetFramebufferSizeCallback);
					bFunctionSet = true;
				}
				return cbfun;
			}



			//			typedef void (*windowfocusfun)(window* window, int focus);
			//			windowfocusfun SetWindowFocusCallback(window* window, windowfocusfun cbfun);
			static windowfocusfun* g_SetWindowFocusCallback = 0;
			static void s_SetWindowFocusCallback(window* window, int iconifieds)
			{
				assert(untested);
				assert(g_SetWindowFocusCallback);
				if (g_SetWindowFocusCallback)
				{
					// todo - ensure that jid and event are valid
					(*g_SetWindowFocusCallback)(window, iconifieds);
				}
			}

			windowfocusfun
				SetWindowFocusCallback(window* window, windowfocusfun cbfun)
			{
				static bool bFunctionSet = false;
				assert(untested);
				g_SetWindowFocusCallback = &cbfun;
				if (!bFunctionSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetWindowFocusCallback(window, s_SetWindowFocusCallback);
					bFunctionSet = true;
				}
				return cbfun;
			}



			//			typedef void (*mousebuttonfun)(window* window, int button, int action, int mods);
			// mousebuttonfun SetMouseButtonCallback(window* window, mousebuttonfun cbfun);
			static mousebuttonfun* g_SetMouseButtonCallback = 0;
			static void s_SetMouseButtonCallback(window* window, int button, int action, int mod)
			{
				assert(untested);
				assert(g_SetMouseButtonCallback);
				if (g_SetMouseButtonCallback)
				{
					// todo - ensure that jid and event are valid
					(*g_SetMouseButtonCallback)(window, button, action, mod);
				}
			}

			mousebuttonfun
				SetMouseButtonCallback(window* window, mousebuttonfun cbfun)
			{
				static bool bFunctionSet = false;
				assert(untested);
				g_SetMouseButtonCallback = &cbfun;
				if (!bFunctionSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetMouseButtonCallback(window, s_SetMouseButtonCallback);
					bFunctionSet = true;
				}
				return cbfun;
			}


			
			
			
			//			typedef void (*scrollfun)(window* window, double xoffset, double yoffset);
			// scrollfun SetScrollCallback(window* window, scrollfun cbfun);
			static scrollfun* g_SetScrollCallback = 0;
			static void s_SetScrollCallback(window* window,double xoffset, double yoffset)
			{
				assert(untested);
				assert(g_SetScrollCallback);
				if (g_SetScrollCallback)
				{
					// todo - ensure that jid and event are valid
					(*g_SetScrollCallback)(window, xoffset, yoffset);
				}
			}

			scrollfun
				SetScrollCallback(window* window, scrollfun cbfun)
			{
				static bool bFunctionSet = false;
				assert(untested);
				g_SetScrollCallback = &cbfun;
				if (!bFunctionSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetScrollCallback(window, s_SetScrollCallback);
					bFunctionSet = true;
				}
				return cbfun;
			}

			
			
			//			typedef void (*keyfun)(window* window, int key, int scancode, int action, int modes);
			// keyfun SetKeyCallback(window* window, keyfun cbfun);
			keyfun* g_SetKeyCallback = 0;
			static void s_SetKeyCallback(window* window, int key, int scancode, int action, int modes)
			{
				assert(untested);
				assert(g_SetKeyCallback);
				if (g_SetKeyCallback)
				{
					// todo - ensure that jid and event are valid
					(*g_SetKeyCallback)(window, key, scancode, action, modes);
				}
			}

			keyfun
				SetKeyCallback(window* window, keyfun cbfun)
			{
				static bool bFunctionSet = false;
//				assert(untested);
				g_SetKeyCallback = &cbfun;
				if (!bFunctionSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetKeyCallback(window, s_SetKeyCallback);
					bFunctionSet = true;
				}
				return cbfun;
			}


			
			
			//			typedef void (*windowclosefun)(window* window);
			// windowclosefun SetWindowCloseCallback(window* window, windowclosefun cbfun);
			static windowclosefun* g_SetWindowCloseCallback = 0;
			static void s_SetWindowCloseCallback(window* window)
			{
				assert(untested);
				assert(g_SetWindowCloseCallback );
				if (g_SetWindowCloseCallback)
				{
					// todo - ensure that jid and event are valid
					(*g_SetWindowCloseCallback)(window);
				}
			}

			windowclosefun
				SetWindowCloseCallback(window* window, windowclosefun cbfun)
			{
				static bool bFunctionSet = false;
				assert(untested);
				g_SetWindowCloseCallback = &cbfun;
				if (!bFunctionSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetWindowCloseCallback(window, s_SetWindowCloseCallback);
					bFunctionSet = true;
				}
				return cbfun;
			}



//			typedef void (*windowiconifyfun)(window* window, int iconified);
//			windowiconifyfun SetWindowIconifyCallback(window* window, windowiconifyfun cbfun);
			static windowiconifyfun* g_SetWindowIconifyCallback = 0;
			static void s_SetWindowIconifyCallback(window* window, int iconifieds)
			{
				assert(untested);
				assert(g_SetWindowIconifyCallback);
				if (g_SetWindowIconifyCallback)
				{
					// todo - ensure that jid and event are valid
					(*g_SetWindowIconifyCallback)(window, iconifieds);
				}
			}

			windowiconifyfun
			SetWindowIconifyCallback(window* window, windowiconifyfun cbfun)
			{
				static bool bFunctionSet = false;
				assert(untested);
				g_SetWindowIconifyCallback = &cbfun;
				if (!bFunctionSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetWindowIconifyCallback(window, s_SetWindowIconifyCallback);
					bFunctionSet = true;
				}
				return cbfun;
			}

			
			//			typedef void (*windowposfun)(window* window, int xpos, int ypos);
			// windowposfun SetWindowPosCallback(window* window, windowpos fun cbfun);
			static windowposfun* g_SetWindowPosCallback = 0;
			static void s_SetWindowPosCallback(window* window, int xpos, int ypos)
			{
				assert(untested);
				assert(g_SetWindowPosCallback );
				if (g_SetWindowPosCallback)
				{
					// todo - ensure that jid and event are valid
					(*g_SetWindowPosCallback)(window, xpos, ypos);
				}
			}

			windowposfun
			SetWindowPosCallback(window* window, windowposfun cbfun)
			{
				static bool bFunctionSet = false;
				assert(untested);
				g_SetWindowPosCallback = &cbfun;
				if (!bFunctionSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetWindowPosCallback(window, s_SetWindowPosCallback);
					bFunctionSet = true;
				}
				return cbfun;
			}


//			typedef void (*windowrefreshfun)(window* window);
//			windowrefreshfun SetWindowRefreshCallback(window* window, windowrefreshfun cbfun);
			static windowrefreshfun* g_SetWindowRefreshCallback = 0;
			// This is the global joystick callback function
			// calls the user defined callback 
			static void s_SetWindowRefreshCallback(window* window)
			{
				assert(untested);
				assert(g_SetWindowRefreshCallback );
				if (g_SetWindowRefreshCallback)
				{
					// todo - ensure that jid and event are valid
					(*g_SetWindowRefreshCallback)(window);
				}
			}

			windowrefreshfun
				SetWindowRefreshCallback(window* window, windowrefreshfun cbfun)
			{
				static bool bFunctionSet = false;
				assert(untested);
				g_SetWindowRefreshCallback = &cbfun;
				if (!bFunctionSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetWindowRefreshCallback(window, s_SetWindowRefreshCallback);
					bFunctionSet = true;
				}
				return cbfun;
			}

			static cursorenterfun* g_CursorenterfunCallback = 0;			// Store global joystick function
			// This is the global joystick callback function
			// calls the user defined callback 
			static void s_CursorEnterCallback(window* window, int entered)
			{
				assert(untested);
				assert(g_CursorenterfunCallback );
				if (g_CursorenterfunCallback)
				{
					// todo - ensure that jid and event are valid
					(*g_CursorenterfunCallback)(window, entered);
				}
			}

			cursorenterfun
			SetCursorEnterCallback(window* window, cursorenterfun cbfun)
			{
				static bool bFunctionSet = false;
				assert(untested);
				g_CursorenterfunCallback = &cbfun;
				if (!bFunctionSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetCursorEnterCallback(window, s_CursorEnterCallback);
					bFunctionSet = true;
				}
				return cbfun;
			}

			// Redirect for glfwSetCursorPosCallback 
			// 	typedef void (*cursorposfun)(window*, double xpos, double ypos);
			static cursorposfun* g_CursorPosCallback = 0;			// Store global joystick function
			// This is the global joystick callback function
			// calls the user defined callback 
			static void s_CursorPosCallback(window* window, double xpos, double ypos)
			{
				assert(untested);
				assert(g_CursorPosCallback );
				if (g_CursorPosCallback)
				{
					// todo - ensure that jid and event are valid
					(*g_CursorPosCallback)(window, xpos, ypos);
				}
			}

			cursorposfun SetCursorPosCallback(window* window, cursorposfun cbfun)
			{
				assert(untested);
				bool bFunctionSet = false;
				g_CursorPosCallback = &cbfun;
				if (!bFunctionSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetCursorPosCallback(window, s_CursorPosCallback);
					bFunctionSet = true;
				}
				return cbfun;
			}

			// Redirect for glfwSetDropCallback 
			// 				typedef void (*dropfun)(window* window, int val, const char** key);
			static dropfun * g_SetDropCallback = 0;			// Store global joystick function
			// This is the global joystick callback function
			// calls the user defined callback 
			static void s_SetDropCallback(window* window, int val, const char** key)
			{
				assert(untested);
				assert(g_SetDropCallback );
				if (g_SetDropCallback)
				{
					// todo - ensure that jid and event are valid
					(*g_SetDropCallback)(window, val, key);
				}
			}

			dropfun SetDropCallback(window* window, dropfun cbfun)
			{
				assert(untested);
				bool bFunctionSet = false;
				g_SetDropCallback = &cbfun;
				if (!bFunctionSet)
				{
					// We need to indirect though our own joystick callback to validate it and
					// change from int to enums
					glfwSetDropCallback(window, s_SetDropCallback);
					bFunctionSet = true;
				}
				return cbfun;
			}
		} // Window
	}
}