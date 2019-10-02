#include <iostream>
#include <SFML/Graphics.hpp>

sf::RenderWindow window(sf::VideoMode(600, 600), "Title here!");

void handleEvents()
{
	sf::Event event;

	while(window.pollEvent(event))
	{
		if(event.type == sf::Event::Closed)
		{
			window.close();
		}
	}
}

void update()
{

}

void render()
{
	window.clear(sf::Color::Black);

	window.display();
}

int main()
{
    while(window.isOpen())
	{
		handleEvents();
		update();
		render();
	}
}
