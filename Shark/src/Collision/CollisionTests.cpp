/////////////////////////////////////////////////////////////////////////////////
//
// Shark 
// Copyright (c) 2018 Jakob Ahrneteg
//
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would be
//    appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such, and must not be
//    misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <Collision/CollisionTests.hpp>

namespace shark
{
	bool CollisionTests::boxvsBox(skBox a, skBox b)
	{
		// No intersection found as corners are separated along an axis
		if (a.max.x < b.min.x || a.min.x > b.max.x) return false;
		if (a.max.y < b.min.y || a.min.y > b.max.y) return false;

		// Atleast one overlapping axis
		return true;
	}

	bool CollisionTests::circlevsCircle(skCircle a, skCircle b)
	{
		float r = a.radius + b.radius;
		r *= r;
		return r < ((a.position.x + b.position.x) * (a.position.x + b.position.x)) + 
				   ((a.position.y + b.position.y) + (a.position.y + b.position.y));
	}
}