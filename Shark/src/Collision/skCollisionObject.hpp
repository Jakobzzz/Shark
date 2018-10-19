#pragma once

#include <Math/skVec2.hpp>

namespace shark
{
	class skCollisionObject
	{
	public:
		skCollisionObject();
		virtual ~skCollisionObject() {};

	public:
		skVec2 velocity;
		float mass;
		float invMass;
		float restitution;
	};
}