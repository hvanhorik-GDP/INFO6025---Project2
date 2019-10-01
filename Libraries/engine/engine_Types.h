#pragma once

#include "glm/fwd.hpp"

namespace engine
{
	// For now we will use the glm library but define our own types.
	// This will allow us to swap out types in the future.
	typedef glm::vec2 Vector2;
	typedef glm::vec3 Vector3;
	typedef Vector2 Point;
	typedef glm::mat4x4 Vatrix4x4;

	typedef glm::vec4 Vector4;

}


