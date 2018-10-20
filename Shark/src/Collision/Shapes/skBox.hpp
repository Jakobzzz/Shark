#pragma once

// Shark
#include <Math/skVec2.hpp>

namespace shark
{

	class skBox
	{

	public:

		///
		explicit skBox(const skVec2& min, const skVec2& max);

		///
		skBox();

		///
		~skBox() = default;

		skVec2 min;
		skVec2 max;

	};

}

