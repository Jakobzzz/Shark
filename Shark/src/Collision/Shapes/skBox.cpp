#include <Collision/Shapes/skBox.hpp>

namespace shark
{

	skBox::skBox(const skVec2& min, const skVec2& max) :
	min(min),
	max(max)
	{
	}

	skBox::skBox() :
	min(0.f),
	max(0.f)
	{
	}

}