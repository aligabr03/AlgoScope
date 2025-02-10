#include <SFML/Graphics.hpp>
#include <iostream>
#include "sorting.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode({ 1024, 768 }), "AlgoScope");

	sf::Font font("Roboto-Regular.ttf");

    sf::Text text(font, "str", 30);
    text.setFillColor(sf::Color::White);


    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
		window.draw(text);
        window.display();
    }
	return 0;
}


