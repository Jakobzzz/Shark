// C++
#include <iostream>

// Shark
#include <Math/skVec2.hpp>
#include <Collision/skCollisionTests.hpp>
#include <Collision/Shapes/skCircle.hpp>

// SFML
#include <SFML/Graphics.hpp>

using namespace shark;

// Global variables
const float dt = 1.f / 60.f;
const float speed = 100.f;

// Functions
void moveShape(sf::Shape* shape);

struct CircleCollShape 
{
	sf::Shape* circle;
	skCircle circleBody;
};

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
	window.setVerticalSyncEnabled(true);

	// Collision resolver
	skCollisionTests collResolver;

	// Circles
	sf::CircleShape a(10.f);
	a.setPosition(300.f, 300.f);
	a.setFillColor(sf::Color::Green);

	sf::CircleShape b(10.f);
	b.setPosition(sf::Vector2f(350.f, 350.f));
	b.setFillColor(sf::Color::Red);

	// Physics circles
	skCircle physA = skCircle(skVec2(300.f, 300.f), 10.f);
	skCircle physB = skCircle(skVec2(350.f, 350.f), 10.f);

	// Place in collision shape
	CircleCollShape circleA = { &a, physA };
	CircleCollShape circleB = { &b, physB };

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
				window.close();
		}

		// Move circleA with keyboard input
		moveShape(circleA.circle);

		// Update position of the physics bodies
		circleA.circleBody.position = skVec2(circleA.circle->getPosition().x, circleA.circle->getPosition().y);
		circleB.circleBody.position = skVec2(circleB.circle->getPosition().x, circleB.circle->getPosition().y);

		// Check for collision
		if (collResolver.circleVsCircle(circleA.circleBody, circleB.circleBody))
		{
			std::cout << "Collision" << std::endl;
		}

		window.clear();
		window.draw(*circleA.circle);
		window.draw(*circleB.circle);
		window.display();
	}

	return 0;
}

void moveShape(sf::Shape* shape)
{
	sf::Vector2f movement(0.f, 0.f);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		movement.y -= speed;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		movement.y += speed;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		movement.x += speed;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		movement.x -= speed;
	}

	shape->move(movement * dt);
}