#pragma once

#include <Collision/skCollisionObject.hpp>

namespace shark
{
	class skCircle : public skCollisionObject
	{
	public:
		explicit skCircle(const skVec2& position, float radius);
		skCircle();
		~skCircle() = default;

	public:
		skVec2 position;
		float radius;
	};
}