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

#include <iostream>
#include <Math/skVec2.hpp>

using namespace shark;

int main()
{
	skVec2 test = skVec2(0.f, 5.f);
	skVec2 another = skVec2(10.f, 10.f);
	test += another;

	std::cout << test.x << ", " << test.y << std::endl;
	system("pause");
	return 0;
}