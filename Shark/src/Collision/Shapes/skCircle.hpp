#pragma once

// Shark
#include <Math/skVec2.hpp>

namespace shark
{

	class skCircle
	{

	public:

		///
		explicit skCircle(const skVec2& position, float radius);

		///
		skCircle();

		///
		~skCircle() = default;

		skVec2 position;
		float radius;

	};

}