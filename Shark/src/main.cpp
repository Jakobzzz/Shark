#include <iostream>
#include <math/skVec2.hpp>

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