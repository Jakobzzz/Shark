#include <Collision/skCollisionTests.hpp>
#include <Collision/skManifold.hpp>
#include <Collision/Shapes/skBox.hpp>
#include <Collision/Shapes/skCircle.hpp>

namespace shark
{
	bool skCollisionTests::boxvsBox(skManifold* manifold)
	{
		//// No intersection found as corners are separated along an axis
		//if (a.max.x < b.min.x || a.min.x > b.max.x) return false;
		//if (a.max.y < b.min.y || a.min.y > b.max.y) return false;

		//// Atleast one overlapping axis
		//return true;
		return true;
	}

	bool skCollisionTests::circlevsCircle(skManifold* manifold)
	{
		skCircle* A = dynamic_cast<skCircle*>(manifold->A);
		skCircle* B = dynamic_cast<skCircle*>(manifold->B);

		// A -> B
		skVec2 n = A->position + B->position;
		float r = A->radius + B->radius;
		r *= r;

		if (n.lengthSquared() > r)
			return false;

		// Circles have collided, now compute manifold
		float d = n.length();

		if (d > 0.f)
		{
			manifold->penetration = r - d;
			manifold->normal = n / d;
			return true;
		}

		// Circles are on the same position
		manifold->penetration = A->radius;
		manifold->normal = skVec2(1.f, 0.f);	
		return true;
	}
}