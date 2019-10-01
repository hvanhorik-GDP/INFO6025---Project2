#pragma once

#include "glfw_raw_Common.h"

namespace glfw
{
	namespace raw
	{

		namespace Key
		{
			enum eKey
			{
				KeyUnknown = -1,				// GLFW_KEY_UNKNOWN
				KeySpace = 32,				// GLFW_KEY_SPACE
				KeyApostrophe = 39,				// GLFW_KEY_APOSTROPHE
				KeyComma = 44,				// GLFW_KEY_COMMA
				KeyMinus = 45,				// GLFW_KEY_MINUS
				KeyPeriod = 46,				// GLFW_KEY_PERIOD
				KeySlash = 47,				// GLFW_KEY_SLASH
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
				KeySemicolon = 59,				// GLFW_KEY_SEMICOLON
				KeyEqual = 61,				// GLFW_KEY_EQUAL
				KeyA = 65,				// GLFW_KEY_A
				KeyB = 66,				// GLFW_KEY_B
				KeyC = 67,				// GLFW_KEY_C
				KeyD = 68,				// GLFW_KEY_D
				KeyE = 69,				// GLFW_KEY_E
				KeyF = 70,				// GLFW_KEY_F
				KeyG = 71,				// GLFW_KEY_G
				KeyH = 72,				// GLFW_KEY_H
				KeyI = 73,				// GLFW_KEY_I
				KeyJ = 74,				// GLFW_KEY_J
				KeyK = 75,				// GLFW_KEY_K
				KeyL = 76,				// GLFW_KEY_L
				KeyM = 77,				// GLFW_KEY_M
				KeyN = 78,				// GLFW_KEY_N
				KeyO = 79,				// GLFW_KEY_O
				KeyP = 80,				// GLFW_KEY_P
				KeyQ = 81,				// GLFW_KEY_Q
				KeyR = 82,				// GLFW_KEY_R
				KeyS = 83,				// GLFW_KEY_S
				KeyT = 84,				// GLFW_KEY_T
				KeyU = 85,				// GLFW_KEY_U
				KeyV = 86,				// GLFW_KEY_V
				KeyW = 87,				// GLFW_KEY_W
				KeyX = 88,				// GLFW_KEY_X
				KeyY = 89,				// GLFW_KEY_Y
				KeyZ = 90,				// GLFW_KEY_Z
				KeyLeftBracket = 91,				// GLFW_KEY_LEFT_BRACKET
				KeyBackslash = 92,				// GLFW_KEY_BACKSLASH
				KeyRightBracket = 93,				// GLFW_KEY_RIGHT_BRACKET
				KeyGraveAccent = 96,				// GLFW_KEY_GRAVE_ACCENT
				KeyWorld_1 = 161,				// GLFW_KEY_WORLD_1
				KeyWorld_2 = 162,				// GLFW_KEY_WORLD_2
				KeyEscape = 256,				// GLFW_KEY_ESCAPE
				KeyEnter = 257,				// GLFW_KEY_ENTER
				KeyTab = 258,				// GLFW_KEY_TAB
				KeyBackspace = 259,				// GLFW_KEY_BACKSPACE
				KeyInsert = 260,				// GLFW_KEY_INSERT
				KeyDelete = 261,				// GLFW_KEY_DELETE
				KeyRight = 262,				// GLFW_KEY_RIGHT
				KeyLeft = 263,				// GLFW_KEY_LEFT
				KeyDown = 264,				// GLFW_KEY_DOWN
				KeyUp = 265,				// GLFW_KEY_UP
				KeyPageUp = 266,				// GLFW_KEY_PAGE_UP
				KeyPageDown = 267,				// GLFW_KEY_PAGE_DOWN
				KeyHome = 268,				// GLFW_KEY_HOME
				KeyEnd = 269,				// GLFW_KEY_END
				KeyCapsLock = 280,				// GLFW_KEY_CAPS_LOCK
				KeyScrollLock = 281,				// GLFW_KEY_SCROLL_LOCK
				KeyNumLock = 282,				// GLFW_KEY_NUM_LOCK
				KeyPrintScreen = 283,				// GLFW_KEY_PRINT_SCREEN
				KeyPause = 284,				// GLFW_KEY_PAUSE
				KeyF1 = 290,				// GLFW_KEY_F1
				KeyF2 = 291,				// GLFW_KEY_F2
				KeyF3 = 292,				// GLFW_KEY_F3
				KeyF4 = 293,				// GLFW_KEY_F4
				KeyF5 = 294,				// GLFW_KEY_F5
				KeyF6 = 295,				// GLFW_KEY_F6
				KeyF7 = 296,				// GLFW_KEY_F7
				KeyF8 = 297,				// GLFW_KEY_F8
				KeyF9 = 298,				// GLFW_KEY_F9
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
				KeyF20 = 309,				// GLFW_KEY_F20
				KeyF21 = 310,				// GLFW_KEY_F21
				KeyF22 = 311,				// GLFW_KEY_F22
				KeyF23 = 312,				// GLFW_KEY_F23
				KeyF24 = 313,				// GLFW_KEY_F24
				KeyF25 = 314,				// GLFW_KEY_F25
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
				KeyKpDecimal = 330,				// GLFW_KEY_KP_DECIMAL
				KeyKpDivide = 331,				// GLFW_KEY_KP_DIVIDE
				KeyKpMultiply = 332,				// GLFW_KEY_KP_MULTIPLY
				KeyKpSubtract = 333,				// GLFW_KEY_KP_SUBTRACT
				KeyKpAdd = 334,				// GLFW_KEY_KP_ADD
				KeyKpEnter = 335,				// GLFW_KEY_KP_ENTER
				KeyKpEqual = 336,				// GLFW_KEY_KP_EQUAL
				KeyLeftShift = 340,				// GLFW_KEY_LEFT_SHIFT
				KeyLeftControl = 341,				// GLFW_KEY_LEFT_CONTROL
				KeyLeftAlt = 342,				// GLFW_KEY_LEFT_ALT
				KeyLeftSuper = 343,				// GLFW_KEY_LEFT_SUPER
				KeyRightShift = 344,				// GLFW_KEY_RIGHT_SHIFT
				KeyRightControl = 345,				// GLFW_KEY_RIGHT_CONTROL
				KeyRightAlt = 346,				// GLFW_KEY_RIGHT_ALT
				KeyRightSuper = 347,				// GLFW_KEY_RIGHT_SUPER
				KeyMenu = 348,				// GLFW_KEY_MENU
				KeyLast = KeyMenu,				// GLFW_KEY_LAST
			};

			enum eModifier
			{
				ModShift = 0x0001,				// GLFW_MOD_SHIFT
				ModControl = 0x0002,				// GLFW_MOD_CONTROL
				ModAlt = 0x0004,				// GLFW_MOD_ALT
				ModSuper = 0x0008,				// GLFW_MOD_SUPER
			};
			enum eAction
			{
				Press = 1,				// GLFW_PRESS
				Repeat = 2,				// GLFW_REPEAT
			};

			const char* GetKeyName(eKey key, int scancode);
		}
	}
}

