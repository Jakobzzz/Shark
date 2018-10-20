#pragma once

namespace shark
{

	class skBox;
	class skCircle;

	class skCollisionTests
	{

	public:

		///
		~skCollisionTests() = default;

		///
		bool boxVsBox(skBox a, skBox b);

		///
		bool circleVsCircle(skCircle a, skCircle b);

	};

}
