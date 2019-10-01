#pragma once

// This is an attempt to put all of the openGL functions in a logical order 
// These will just be flowthrough methods so I can get rid of all OpenGL from my other code
// Note the deep namespace to make it irritating for anyone to actually use these apis.
//

// Reference only

#ifdef JUNK_FILE

namespace glfw
{
	namespace raw
	{
		namespace defines
		{
			//
			// eOther GL defines
			//


			//
			// Accum
			//
			enum eAccum
			{
				AccumAlphaBits = 0x0002100A,				// GLFW_ACCUM_ALPHA_BITS
				AccumBlueBits = 0x00021009,				// GLFW_ACCUM_BLUE_BITS
				AccumGreenBits = 0x00021008,				// GLFW_ACCUM_GREEN_BITS
				AccumRedBits = 0x00021007,				// GLFW_ACCUM_RED_BITS
			} eAccum;	// eAccum

			//
			// Context
			//
			enum eContext
			{
				ContextCreationApi = 0x0002200B,				// GLFW_CONTEXT_CREATION_API
				ContextNoError = 0x0002200A,				// GLFW_CONTEXT_NO_ERROR
				ContextReleaseBehavior = 0x00022009,				// GLFW_CONTEXT_RELEASE_BEHAVIOR
				ContextRevision = 0x00022004,				// GLFW_CONTEXT_REVISION
				ContextRobustness = 0x00022005,				// GLFW_CONTEXT_ROBUSTNESS
				ContextVersionMajor = 0x00022002,				// GLFW_CONTEXT_VERSION_MAJOR
				ContextVersionMinor = 0x00022003,				// GLFW_CONTEXT_VERSION_MINOR
				EglContextApi = 0x00036002,				// GLFW_EGL_CONTEXT_API
				LoseContextOnReset = 0x00031002,				// GLFW_LOSE_CONTEXT_ON_RESET
				NativeContextApi = 0x00036001,				// GLFW_NATIVE_CONTEXT_API
				NoCurrentContext = 0x00010002,				// GLFW_NO_CURRENT_CONTEXT
				NoWindowContext = 0x0001000A,				// GLFW_NO_WINDOW_CONTEXT
			} eContext;	// eContext

			//
			// Cursor
			//
			enum eCursor
			{
				ArrowCursor = 0x00036001,				// GLFW_ARROW_CURSOR
				CrosshairCursor = 0x00036003,				// GLFW_CROSSHAIR_CURSOR
				Cursor = 0x00033001,				// GLFW_CURSOR
				CursorDisabled = 0x00034003,				// GLFW_CURSOR_DISABLED
				CursorHidden = 0x00034002,				// GLFW_CURSOR_HIDDEN
				CursorNormal = 0x00034001,				// GLFW_CURSOR_NORMAL
				HandCursor = 0x00036004,				// GLFW_HAND_CURSOR
				HresizeCursor = 0x00036005,				// GLFW_HRESIZE_CURSOR
				IbeamCursor = 0x00036002,				// GLFW_IBEAM_CURSOR
				VresizeCursor = 0x00036006,				// GLFW_VRESIZE_CURSOR
			} eCursor;	// eCursor

			//
			// Depth
			//
			enum eDepth
			{
				DepthBits = 0x00021005,				// GLFW_DEPTH_BITS
			} eDepth;	// eDepth

			//
			// Invalid
			//
			enum eInvalid
			{
				InvalidEnum = 0x00010003,				// GLFW_INVALID_ENUM
				InvalidValue = 0x00010004,				// GLFW_INVALID_VALUE
			} eInvalid;	// eInvalid

			//
			// Joystick
			//
			enum eJoystick
			{
				Joystick_1 = 0,				// GLFW_JOYSTICK_1
				Joystick_2 = 1,				// GLFW_JOYSTICK_2
				Joystick_3 = 2,				// GLFW_JOYSTICK_3
				Joystick_4 = 3,				// GLFW_JOYSTICK_4
				Joystick_5 = 4,				// GLFW_JOYSTICK_5
				Joystick_6 = 5,				// GLFW_JOYSTICK_6
				Joystick_7 = 6,				// GLFW_JOYSTICK_7
				Joystick_8 = 7,				// GLFW_JOYSTICK_8
				Joystick_9 = 8,				// GLFW_JOYSTICK_9
				Joystick_10 = 9,				// GLFW_JOYSTICK_10
				Joystick_11 = 10,				// GLFW_JOYSTICK_11
				Joystick_12 = 11,				// GLFW_JOYSTICK_12
				Joystick_13 = 12,				// GLFW_JOYSTICK_13
				Joystick_14 = 13,				// GLFW_JOYSTICK_14
				Joystick_15 = 14,				// GLFW_JOYSTICK_15
				Joystick_16 = 15,				// GLFW_JOYSTICK_16
				JoystickLast = Joystick_16,				// GLFW_JOYSTICK_LAST
			} eJoystick;	// eJoystick

			//
			// Key
			//
			enum eKey
			{
				KeyA = 65,				// GLFW_KEY_A
				KeyApostrophe = 39,				// GLFW_KEY_APOSTROPHE
				KeyB = 66,				// GLFW_KEY_B
				KeyBackslash = 92,				// GLFW_KEY_BACKSLASH
				KeyBackspace = 259,				// GLFW_KEY_BACKSPACE
				KeyC = 67,				// GLFW_KEY_C
				KeyCapsLock = 280,				// GLFW_KEY_CAPS_LOCK
				KeyComma = 44,				// GLFW_KEY_COMMA
				KeyD = 68,				// GLFW_KEY_D
				KeyDelete = 261,				// GLFW_KEY_DELETE
				KeyDown = 264,				// GLFW_KEY_DOWN
				KeyE = 69,				// GLFW_KEY_E
				KeyEnd = 269,				// GLFW_KEY_END
				KeyEnter = 257,				// GLFW_KEY_ENTER
				KeyEqual = 61,				// GLFW_KEY_EQUAL
				KeyEscape = 256,				// GLFW_KEY_ESCAPE
				KeyF = 70,				// GLFW_KEY_F
				KeyF1 = 290,				// GLFW_KEY_F1
				KeyF10 = 299,				// GLFW_KEY_F10
				KeyF11 = 300,				// GLFW_KEY_F11
				KeyF12 = 301,				// GLFW_KEY_F12
				KeyF13 = 302,				// GLFW_KEY_F13
				KeyF14 = 303,				// GLFW_KEY_F14
				KeyF15 = 304,				// GLFW_KEY_F15
				KeyF16 = 305,				// GLFW_KEY_F16
				KeyF17 = 306,				// GLFW_KEY_F17
				KeyF18 = 307,				// GLFW_KEY_F18
				KeyF19 = 308,				// GLFW_KEY_F19
				KeyF2 = 291,				// GLFW_KEY_F2
				KeyF20 = 309,				// GLFW_KEY_F20
				KeyF21 = 310,				// GLFW_KEY_F21
				KeyF22 = 311,				// GLFW_KEY_F22
				KeyF23 = 312,				// GLFW_KEY_F23
				KeyF24 = 313,				// GLFW_KEY_F24
				KeyF25 = 314,				// GLFW_KEY_F25
				KeyF3 = 292,				// GLFW_KEY_F3
				KeyF4 = 293,				// GLFW_KEY_F4
				KeyF5 = 294,				// GLFW_KEY_F5
				KeyF6 = 295,				// GLFW_KEY_F6
				KeyF7 = 296,				// GLFW_KEY_F7
				KeyF8 = 297,				// GLFW_KEY_F8
				KeyF9 = 298,				// GLFW_KEY_F9
				KeyG = 71,				// GLFW_KEY_G
				KeyGraveAccent = 96,				// GLFW_KEY_GRAVE_ACCENT
				KeyH = 72,				// GLFW_KEY_H
				KeyHome = 268,				// GLFW_KEY_HOME
				KeyI = 73,				// GLFW_KEY_I
				KeyInsert = 260,				// GLFW_KEY_INSERT
				KeyJ = 74,				// GLFW_KEY_J
				KeyK = 75,				// GLFW_KEY_K
				KeyKpAdd = 334,				// GLFW_KEY_KP_ADD
				KeyKpDecimal = 330,				// GLFW_KEY_KP_DECIMAL
				KeyKpDivide = 331,				// GLFW_KEY_KP_DIVIDE
				KeyKpEnter = 335,				// GLFW_KEY_KP_ENTER
				KeyKpEqual = 336,				// GLFW_KEY_KP_EQUAL
				KeyKpMultiply = 332,				// GLFW_KEY_KP_MULTIPLY
				KeyKpSubtract = 333,				// GLFW_KEY_KP_SUBTRACT
				KeyKp_0 = 320,				// GLFW_KEY_KP_0
				KeyKp_1 = 321,				// GLFW_KEY_KP_1
				KeyKp_2 = 322,				// GLFW_KEY_KP_2
				KeyKp_3 = 323,				// GLFW_KEY_KP_3
				KeyKp_4 = 324,				// GLFW_KEY_KP_4
				KeyKp_5 = 325,				// GLFW_KEY_KP_5
				KeyKp_6 = 326,				// GLFW_KEY_KP_6
				KeyKp_7 = 327,				// GLFW_KEY_KP_7
				KeyKp_8 = 328,				// GLFW_KEY_KP_8
				KeyKp_9 = 329,				// GLFW_KEY_KP_9
				KeyL = 76,				// GLFW_KEY_L
				KeyLeft = 263,				// GLFW_KEY_LEFT
				KeyLeftAlt = 342,				// GLFW_KEY_LEFT_ALT
				KeyLeftBracket = 91,				// GLFW_KEY_LEFT_BRACKET
				KeyLeftControl = 341,				// GLFW_KEY_LEFT_CONTROL
				KeyLeftShift = 340,				// GLFW_KEY_LEFT_SHIFT
				KeyLeftSuper = 343,				// GLFW_KEY_LEFT_SUPER
				KeyM = 77,				// GLFW_KEY_M
				KeyMenu = 348,				// GLFW_KEY_MENU
				KeyMinus = 45,				// GLFW_KEY_MINUS
				KeyN = 78,				// GLFW_KEY_N
				KeyNumLock = 282,				// GLFW_KEY_NUM_LOCK
				KeyO = 79,				// GLFW_KEY_O
				KeyP = 80,				// GLFW_KEY_P
				KeyPageDown = 267,				// GLFW_KEY_PAGE_DOWN
				KeyPageUp = 266,				// GLFW_KEY_PAGE_UP
				KeyPause = 284,				// GLFW_KEY_PAUSE
				KeyPeriod = 46,				// GLFW_KEY_PERIOD
				KeyPrintScreen = 283,				// GLFW_KEY_PRINT_SCREEN
				KeyQ = 81,				// GLFW_KEY_Q
				KeyR = 82,				// GLFW_KEY_R
				KeyRight = 262,				// GLFW_KEY_RIGHT
				KeyRightAlt = 346,				// GLFW_KEY_RIGHT_ALT
				KeyRightBracket = 93,				// GLFW_KEY_RIGHT_BRACKET
				KeyRightControl = 345,				// GLFW_KEY_RIGHT_CONTROL
				KeyRightShift = 344,				// GLFW_KEY_RIGHT_SHIFT
				KeyRightSuper = 347,				// GLFW_KEY_RIGHT_SUPER
				KeyS = 83,				// GLFW_KEY_S
				KeyScrollLock = 281,				// GLFW_KEY_SCROLL_LOCK
				KeySemicolon = 59,				// GLFW_KEY_SEMICOLON
				KeySlash = 47,				// GLFW_KEY_SLASH
				KeySpace = 32,				// GLFW_KEY_SPACE
				KeyT = 84,				// GLFW_KEY_T
				KeyTab = 258,				// GLFW_KEY_TAB
				KeyU = 85,				// GLFW_KEY_U
				KeyUnknown = -1,				// GLFW_KEY_UNKNOWN
				KeyUp = 265,				// GLFW_KEY_UP
				KeyV = 86,				// GLFW_KEY_V
				KeyW = 87,				// GLFW_KEY_W
				KeyWorld_1 = 161,				// GLFW_KEY_WORLD_1
				KeyWorld_2 = 162,				// GLFW_KEY_WORLD_2
				KeyX = 88,				// GLFW_KEY_X
				KeyY = 89,				// GLFW_KEY_Y
				KeyZ = 90,				// GLFW_KEY_Z
				Key_0 = 48,				// GLFW_KEY_0
				Key_1 = 49,				// GLFW_KEY_1
				Key_2 = 50,				// GLFW_KEY_2
				Key_3 = 51,				// GLFW_KEY_3
				Key_4 = 52,				// GLFW_KEY_4
				Key_5 = 53,				// GLFW_KEY_5
				Key_6 = 54,				// GLFW_KEY_6
				Key_7 = 55,				// GLFW_KEY_7
				Key_8 = 56,				// GLFW_KEY_8
				Key_9 = 57,				// GLFW_KEY_9
				KeyLast = KeyMenu,				// GLFW_KEY_LAST
			} eKey;	// eKey

			//
			// Mod
			//
			enum eMod
			{
				ModAlt = 0x0004,				// GLFW_MOD_ALT
				ModControl = 0x0002,				// GLFW_MOD_CONTROL
				ModShift = 0x0001,				// GLFW_MOD_SHIFT
				ModSuper = 0x0008,				// GLFW_MOD_SUPER
			} eMod;	// eMod

			//
			// Mouse
			//
			enum eMouse
			{
				MouseButton_1 = 0,				// GLFW_MOUSE_BUTTON_1
				MouseButton_2 = 1,				// GLFW_MOUSE_BUTTON_2
				MouseButton_3 = 2,				// GLFW_MOUSE_BUTTON_3
				MouseButton_4 = 3,				// GLFW_MOUSE_BUTTON_4
				MouseButton_5 = 4,				// GLFW_MOUSE_BUTTON_5
				MouseButton_6 = 5,				// GLFW_MOUSE_BUTTON_6
				MouseButton_7 = 6,				// GLFW_MOUSE_BUTTON_7
				MouseButton_8 = 7,				// GLFW_MOUSE_BUTTON_8
				MouseButtonLast = MouseButton_8,				// GLFW_MOUSE_BUTTON_LAST
				MouseButtonLeft = MouseButton_1,				// GLFW_MOUSE_BUTTON_LEFT
				MouseButtonMiddle = MouseButton_3,				// GLFW_MOUSE_BUTTON_MIDDLE
				MouseButtonRight = MouseButton_2,				// GLFW_MOUSE_BUTTON_RIGHT
				StickyMouseButtons = 0x00033003,				// GLFW_STICKY_MOUSE_BUTTONS
			} eMouse;	// eMouse

			//
			// Opengl
			//
			enum eOpengl
			{
				OpenglAnyProfile = 0,				// GLFW_OPENGL_ANY_PROFILE
				OpenglApi = 0x00030001,				// GLFW_OPENGL_API
				OpenglCompatProfile = 0x00032002,				// GLFW_OPENGL_COMPAT_PROFILE
				OpenglCoreProfile = 0x00032001,				// GLFW_OPENGL_CORE_PROFILE
				OpenglDebugContext = 0x00022007,				// GLFW_OPENGL_DEBUG_CONTEXT
				OpenglEsApi = 0x00030002,				// GLFW_OPENGL_ES_API
				OpenglForwardCompat = 0x00022006,				// GLFW_OPENGL_FORWARD_COMPAT
				OpenglProfile = 0x00022008,				// GLFW_OPENGL_PROFILE
			} eOpengl;	// eOpengl

			//
			// Release
			//
			enum eRelease
			{
				AnyReleaseBehavior = 0,				// GLFW_ANY_RELEASE_BEHAVIOR
				Release = 0,				// GLFW_RELEASE
				ReleaseBehaviorFlush = 0x00035001,				// GLFW_RELEASE_BEHAVIOR_FLUSH
				ReleaseBehaviorNone = 0x00035002,				// GLFW_RELEASE_BEHAVIOR_NONE
			} eRelease;	// eRelease

			//
			// Stencil
			//
			enum eStencil
			{
				StencilBits = 0x00021006,				// GLFW_STENCIL_BITS
			} eStencil;	// eStencil

			//
			// Version
			//
			enum eVersion
			{
				VersionMajor = 3,				// GLFW_VERSION_MAJOR
				VersionMinor = 2,				// GLFW_VERSION_MINOR
				VersionRevision = 1,				// GLFW_VERSION_REVISION
				VersionUnavailable = 0x00010007,				// GLFW_VERSION_UNAVAILABLE
			} eVersion;	// eVersion

			//
			// eOther GL defines
			//
			enum eOther
			{
				AlphaBits = 0x00021004,				// GLFW_ALPHA_BITS
				ApiUnavailable = 0x00010006,				// GLFW_API_UNAVAILABLE
				AutoIconify = 0x00020006,				// GLFW_AUTO_ICONIFY
				AuxBuffers = 0x0002100B,				// GLFW_AUX_BUFFERS
				BlueBits = 0x00021003,				// GLFW_BLUE_BITS
				ClientApi = 0x00022001,				// GLFW_CLIENT_API
				Connected = 0x00040001,				// GLFW_CONNECTED
				Decorated = 0x00020005,				// GLFW_DECORATED
				Disconnected = 0x00040002,				// GLFW_DISCONNECTED
				DontCare = -1,				// GLFW_DONT_CARE
				Doublebuffer = 0x00021010,				// GLFW_DOUBLEBUFFER
				False = 0,				// GLFW_FALSE
				Floating = 0x00020007,				// GLFW_FLOATING
				Focused = 0x00020001,				// GLFW_FOCUSED
				FormatUnavailable = 0x00010009,				// GLFW_FORMAT_UNAVAILABLE
				GreenBits = 0x00021002,				// GLFW_GREEN_BITS
				Iconified = 0x00020002,				// GLFW_ICONIFIED
				Maximized = 0x00020008,				// GLFW_MAXIMIZED
				NoApi = 0,				// GLFW_NO_API
				NoResetNotification = 0x00031001,				// GLFW_NO_RESET_NOTIFICATION
				NoRobustness = 0,				// GLFW_NO_ROBUSTNESS
				NotInitialized = 0x00010001,				// GLFW_NOT_INITIALIZED
				OutOfMemory = 0x00010005,				// GLFW_OUT_OF_MEMORY
				PlatformError = 0x00010008,				// GLFW_PLATFORM_ERROR
				Press = 1,				// GLFW_PRESS
				RedBits = 0x00021001,				// GLFW_RED_BITS
				RefreshRate = 0x0002100F,				// GLFW_REFRESH_RATE
				Repeat = 2,				// GLFW_REPEAT
				Resizable = 0x00020003,				// GLFW_RESIZABLE
				Samples = 0x0002100D,				// GLFW_SAMPLES
				SrgbCapable = 0x0002100E,				// GLFW_SRGB_CAPABLE
				Stereo = 0x0002100C,				// GLFW_STEREO
				StickyKeys = 0x00033002,				// GLFW_STICKY_KEYS
				True = 1,				// GLFW_TRUE
				Visible = 0x00020004,				// GLFW_VISIBLE
			} eOther;	// eOther
		}
	}
}
#endif JUNK_FILE