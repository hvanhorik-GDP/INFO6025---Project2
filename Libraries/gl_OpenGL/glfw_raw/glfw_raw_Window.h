#pragma once
#include "glfw_raw_Common.h"


namespace glfw
{
	namespace raw
	{
		namespace Window
		{
			enum eHintsFramebuffer
			{
				RedBits = 0x00021001,				// GLFW_RED_BITS
				GreenBits = 0x00021002,				// GLFW_GREEN_BITS
				BlueBits = 0x00021003,				// GLFW_BLUE_BITS
				AlphaBits = 0x00021004,				// GLFW_ALPHA_BITS
				DepthBits = 0x00021005,				// GLFW_DEPTH_BITS
				StencilBits = 0x00021006,				// GLFW_STENCIL_BITS
				AccumRedBits = 0x00021007,				// GLFW_ACCUM_RED_BITS
				AccumGreenBits = 0x00021008,				// GLFW_ACCUM_GREEN_BITS
				AccumBlueBits = 0x00021009,				// GLFW_ACCUM_BLUE_BITS
				AccumAlphaBits = 0x0002100A,				// GLFW_ACCUM_ALPHA_BITS
				AuxBuffers = 0x0002100B,				// GLFW_AUX_BUFFERS
				Stereo = 0x0002100C,				// GLFW_STEREO
				Samples = 0x0002100D,				// GLFW_SAMPLES
				SrgbCapable = 0x0002100E,				// GLFW_SRGB_CAPABLE
				RefreshRate = 0x0002100F,				// GLFW_REFRESH_RATE
				Doublebuffer = 0x00021010,				// GLFW_DOUBLEBUFFER
			};

			enum eHintsContext
			{
				ClientApi = 0x00022001,				// GLFW_CLIENT_API
				ContextVersionMajor = 0x00022002,				// GLFW_CONTEXT_VERSION_MAJOR
				ContextVersionMinor = 0x00022003,				// GLFW_CONTEXT_VERSION_MINOR
				ContextRevision = 0x00022004,				// GLFW_CONTEXT_REVISION
				ContextRobustness = 0x00022005,				// GLFW_CONTEXT_ROBUSTNESS
				OpenglForwardCompat = 0x00022006,				// GLFW_OPENGL_FORWARD_COMPAT
				OpenglDebugContext = 0x00022007,				// GLFW_OPENGL_DEBUG_CONTEXT
				OpenglProfile = 0x00022008,				// GLFW_OPENGL_PROFILE
				ContextReleaseBehavior = 0x00022009,				// GLFW_CONTEXT_RELEASE_BEHAVIOR
				ContextNoError = 0x0002200A,				// GLFW_CONTEXT_NO_ERROR
				ContextCreationApi = 0x0002200B,				// GLFW_CONTEXT_CREATION_API

			};

			enum eWindowAttributes
			{
				Focused = 0x00020001,				// GLFW_FOCUSED
				Iconified = 0x00020002,				// GLFW_ICONIFIED
				Resizable = 0x00020003,				// GLFW_RESIZABLE
				Visible = 0x00020004,				// GLFW_VISIBLE
				Decorated = 0x00020005,				// GLFW_DECORATED
				AutoIconify = 0x00020006,				// GLFW_AUTO_ICONIFY
				Floating = 0x00020007,				// GLFW_FLOATING
				Maximized = 0x00020008,				// GLFW_MAXIMIZED
			};

			typedef enum eHintsContext eContextAttributes;	// Hints and Attributes the same

			enum eAPI
			{
				NoApi = 0,				// GLFW_NO_API
				OpenglApi = 0x00030001,				// GLFW_OPENGL_API
				OpenglEsApi = 0x00030002,				// GLFW_OPENGL_ES_API
			};

			enum eRobustness
			{
				NoRobustness = 0,				// GLFW_NO_ROBUSTNESS
				NoResetNotification = 0x00031001,				// GLFW_NO_RESET_NOTIFICATION
				LoseContextOnReset = 0x00031002,				// GLFW_LOSE_CONTEXT_ON_RESET

			};
			enum eProfile
			{
				OpenglAnyProfile = 0,				// GLFW_OPENGL_ANY_PROFILE
				OpenglCoreProfile = 0x00032001,				// GLFW_OPENGL_CORE_PROFILE
				OpenglCompatProfile = 0x00032002,				// GLFW_OPENGL_COMPAT_PROFILE
			};

			enum eReleaseBehaviour
			{
				AnyReleaseBehavior = 0,				// GLFW_ANY_RELEASE_BEHAVIOR
				ReleaseBehaviorFlush = 0x00035001,				// GLFW_RELEASE_BEHAVIOR_FLUSH
				ReleaseBehaviorNone = 0x00035002,				// GLFW_RELEASE_BEHAVIOR_NONE

			};
			enum eContextCreationAPI
			{
				NativeContextApi = 0x00036001,				// GLFW_NATIVE_CONTEXT_API
				EglContextApi = 0x00036002,				// GLFW_EGL_CONTEXT_API
			};

			enum eInputMode
			{
				Cursor = 0x00033001,				// GLFW_CURSOR
				StickyKeys = 0x00033002,				// GLFW_STICKY_KEYS
				StickyMouseButtons = 0x00033003,				// GLFW_STICKY_MOUSE_BUTTONS
				CursorNormal = 0x00034001,				// GLFW_CURSOR_NORMAL
				CursorHidden = 0x00034002,				// GLFW_CURSOR_HIDDEN
				CursorDisabled = 0x00034003,				// GLFW_CURSOR_DISABLED
			};


			typedef void (*windowclosefun)(window* window);
			typedef void (*windowposfun)(window* window, int xpos, int ypos);
			typedef void (*windowsizefun)(window*, int height, int width);
			typedef void (*windowfocusfun)(window* window, int focus);
			typedef void (*windowrefreshfun)(window* window);
			typedef void (*windowfocusfun)(window* window, int focus);
			typedef void (*windowiconifyfun)(window* window, int iconified);
			typedef void (*framebuffersizefun)(window*, int width, int height);
			typedef void (*mousebuttonfun)(window* window, int button, int action, int mods);
			typedef void (*cursorposfun)(window*, double xpos, double ypos);
			typedef void (*cursorenterfun)(window* window, int entered);
			typedef void (*scrollfun)(window* window, double xoffset, double yoffset); 
			typedef void (*keyfun)(window* window, int key, int scancode, int action, int modes); 
			typedef void (*dropfun)(window* window, int val, const char** key);
			typedef void (*charfun)(window* window, unsigned int codepoint);
			typedef void (*charmodsfun)(window* window, unsigned int codepoint, int mods);

			cursorenterfun SetCursorEnterCallback(window* window, cursorenterfun cbfun);
			cursorposfun SetCursorPosCallback(window* window, cursorposfun cbfun);
			dropfun SetDropCallback(window* window, dropfun cbfun);
			framebuffersizefun SetFramebufferSizeCallback(window* window, framebuffersizefun cbfun);
			keyfun SetKeyCallback(window* window, keyfun cbfun);
			mousebuttonfun SetMouseButtonCallback(window* window, mousebuttonfun cbfun);
			scrollfun SetScrollCallback(window* window, scrollfun cbfun);
			windowclosefun SetWindowCloseCallback(window* window, windowclosefun cbfun);
			windowfocusfun SetWindowFocusCallback(window* window, windowfocusfun cbfun);
			windowiconifyfun SetWindowIconifyCallback(window* window, windowiconifyfun cbfun);
			windowposfun SetWindowPosCallback(window* window, windowposfun cbfun);
			windowrefreshfun SetWindowRefreshCallback(window* window, windowrefreshfun cbfun);
			windowsizefun SetWindowSizeCallback(window* window, windowsizefun cbfun);

			charmodsfun SetCharModsCallback(window* window, charmodsfun cbfun);
			charfun SetCharCallback(GLFWwindow* window, charfun cbfun);

			monitor* GetWindowMonitor(window* window);
			int GetInputMode(window* window, int mode);
			int GetKey(window* window, int key);
			int GetMouseButton(window* window, int button);
			int GetWindowAttrib(window* window, int attrib);
			int WindowShouldClose(window* window);
			void DestroyWindow(window* window);
			void FocusWindow(window* window);
			void GetCursorPos(window* window, double* xpos, double* ypos);
			void GetFramebufferSize(window* window, int* width, int* height);
			void GetWindowFrameSize(window* window, int* left, int* top, int* right, int* bottom);
			void GetWindowPos(window* window, int* xpos, int* ypos);
			void GetWindowSize(window* window, int* width, int* height);
			void HideWindow(window* window);
			void IconifyWindow(window* window);
			void MakeContextCurrent(window* window);
			void MaximizeWindow(window* window);
			void RestoreWindow(window* window);
			void SetClipboardString(window* window, const char* string);
			void SetCursor(window* window, cursor* cursor);
			void SetCursorPos(window* window, double xpos, double ypos);
			void SetInputMode(window* window, int mode, int value);
			void SetWindowAspectRatio(window* window, int numer, int denom);
			void SetWindowIcon(window* window, int count, const image* images);
			void SetWindowMonitor(window* window, monitor* monitor, int xpos, int ypos, int width, int height, int refreshRate);
			void SetWindowPos(window* window, int xpos, int ypos);
			void SetWindowShouldClose(window* window, int value);
			void SetWindowSize(window* window, int width, int height);
			void SetWindowSizeLimits(window* window, int minwidth, int minheight, int maxwidth, int maxheight);
			void SetWindowTitle(window* window, const char* title);
			void SetWindowUserPointer(window* window, void* pointer);
			void ShowWindow(window* window);
			void SwapBuffers(window* window);
			void* GetWindowUserPointer(window* window);
		} // Window
	}
}

