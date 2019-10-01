#pragma once
#include "glfw_raw_Common.h"


namespace glfw
{
	namespace raw
	{
		//
		// Joystick
		//
		namespace Joystick
		{
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
			}; // eJoystick;

			enum eEvent
			{
				Connected = 0x00040001,				// GLFW_CONNECTED
				Disconnected = 0x00040002,				// GLFW_DISCONNECTED
			};

			typedef void (*joystickfun)(eJoystick jid, eEvent event);
			const char* GetJoystickName(eJoystick joy);
			const float* GetJoystickAxes(eJoystick joy, int* count);
			const unsigned char* GetJoystickButtons(eJoystick joy, int* count);
			int JoystickPresent(eJoystick joy);
			joystickfun SetJoystickCallback(joystickfun cbfun);
		}
	}
}
