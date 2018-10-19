#pragma once

#include <Collision/skCollisionObject.hpp>

namespace shark
{
	class skManifold
	{
		skManifold();
		~skManifold() = default;

	public:
		skCollisionObject* A;
		skCollisionObject* B;
		float penetration;
		skVec2 normal;	
	};
}
