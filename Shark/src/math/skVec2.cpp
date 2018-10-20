#include <Math/skVec2.hpp>

// C++
#include <math.h>

namespace shark
{

	skVec2::skVec2(float x) :
	x(x),
	y(x)
	{
	}

	skVec2::skVec2(float x, float y) :
	x(x),
	y(y)
	{
	}

	skVec2::skVec2() :
	x(0.f),
	y(0.f)
	{
	}

	float skVec2::length() const
	{
		return sqrtf(x * x + y * y);
	}

	float skVec2::lengthSquared() const
	{
		return x * x + y * y;
	}

	float skVec2::distance(const skVec2& v) const
	{
		return sqrtf(((x - v.x) * (x - v.x)) + ((y - v.y) * (y - v.y)));
	}

	float skVec2::distanceSquared(const skVec2& v) const
	{
		return ((x - v.x) * (x - v.x)) + ((y - v.y) * (y - v.y));
	}

	float skVec2::dot(const skVec2& v) const
	{
		return x * v.x + y * v.y;
	}

}