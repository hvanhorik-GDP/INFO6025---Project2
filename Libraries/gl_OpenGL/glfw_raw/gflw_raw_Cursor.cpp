#include "gflw_raw_Cursor.h"
#include <gl/GlCommon.h>
#include <cassert>

namespace glfw
{
	namespace raw
	{
		void Cursor::DestroyCursor(cursor* cursor)
		{
			assert(untested);
			assert(cursor != NULL);
			glfwDestroyCursor(cursor);
		}
		cursor* Cursor::CreateCursor(const image* image, int xhot, int yhot)
		{
			assert(untested);
			assert(image != NULL);
			GLFWimage newimage = { image->width, image->height, image->pixels };
			cursor* ret = glfwCreateCursor(&newimage, xhot, yhot);
			assert(ret != NULL);
			return ret;
		}
		cursor* Cursor::CreateStandardCursor(eShape shape)
		{
			assert(untested);
			 
			cursor* ret = glfwCreateStandardCursor(shape);
			assert(ret != NULL);
			return ret;
		}
	}
}