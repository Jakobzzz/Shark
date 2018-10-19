#pragma once

#include <Collision/skCollisionObject.hpp>

namespace shark
{
	class skBox : public skCollisionObject
	{
	public:
		explicit skBox(const skVec2& min, const skVec2& max);
		skBox();
		~skBox() = default;

	public:
		skVec2 min;
		skVec2 max;
	};
}

