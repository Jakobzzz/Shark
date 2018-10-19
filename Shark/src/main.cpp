#include <iostream>
#include <Math/skVec2.hpp>
#include <SFML/Graphics.hpp>

using namespace shark;

int main()
{
	/*skVec2 test = skVec2(0.f, 5.f);
	skVec2 another = skVec2(10.f, 10.f);
	test += another;

	std::cout << test.x << ", " << test.y << std::endl;
	system("pause");*/

	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}