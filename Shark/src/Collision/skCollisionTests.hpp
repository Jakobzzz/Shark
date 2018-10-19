#pragma once

namespace shark
{
	class skManifold;

	class skCollisionTests
	{
		~skCollisionTests() = default;

	public:
		bool boxvsBox(skManifold* manifold);
		bool circlevsCircle(skManifold* manifold);
	};
}
