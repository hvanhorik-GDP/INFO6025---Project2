#pragma once

#include "glfw_raw_Common.h"

namespace glfw
{
	namespace raw
	{
		namespace Cursor
		{
			enum eShape
			{
				ArrowCursor = 0x00036001,				// GLFW_ARROW_CURSOR
				IbeamCursor = 0x00036002,				// GLFW_IBEAM_CURSOR
				CrosshairCursor = 0x00036003,				// GLFW_CROSSHAIR_CURSOR
				HandCursor = 0x00036004,				// GLFW_HAND_CURSOR
				HresizeCursor = 0x00036005,				// GLFW_HRESIZE_CURSOR
				VresizeCursor = 0x00036006,				// GLFW_VRESIZE_CURSOR
			};
			void DestroyCursor(cursor* cursor);
			cursor* CreateCursor(const image* image, int xhot, int yhot);
			cursor* CreateStandardCursor(eShape shape);
		}
	}
}

