#include <Collision/Shapes/skCircle.hpp>

namespace shark
{

	skCircle::skCircle(const skVec2& position, float radius) :
	position(position),
	radius(radius)
	{
	}

	skCircle::skCircle() :
	position(0.f),
	radius(0.f)
	{
	}

}