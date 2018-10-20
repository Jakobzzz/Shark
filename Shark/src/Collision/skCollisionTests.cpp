#include <Collision/skCollisionTests.hpp>

// Shark
#include <Collision/Shapes/skBox.hpp>
#include <Collision/Shapes/skCircle.hpp>

namespace shark
{
	bool skCollisionTests::boxVsBox(skBox a, skBox b)
	{
		// No intersection found as corners are separated along an axis
		if (a.max.x < b.min.x || a.min.x > b.max.x) return false;
		if (a.max.y < b.min.y || a.min.y > b.max.y) return false;

		// Atleast one overlapping axis
		return true;
	}

	bool skCollisionTests::circleVsCircle(skCircle a, skCircle b)
	{
		float r = a.radius + b.radius;
		r *= r;

		// Is the sum greater than the distance between the two circles?
		return r > a.position.distanceSquared(b.position);
	}
}