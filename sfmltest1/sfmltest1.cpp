// sfmltest1.cpp : This is a test of the SFML game dev system
// Nico Nico

#include <SFML/Graphics.hpp>

using namespace sf;

int main() {

	const int gameWidth = 640;
	const int gameHeight = 480;

	// Create the window
	RenderWindow window(VideoMode(gameWidth, gameHeight, 32), "SFML Test Nico Nico ", Style::Titlebar | Style::Close);
	window.setVerticalSyncEnabled(true);

	while (window.isOpen())
	{
		// handle the events
		Event event;
		while (window.pollEvent(event))
		{
			// window closed or esc key pressed
			if ((event.type == Event::Closed) ||
				((event.type == Event::KeyPressed) && (event.key.code == Keyboard::Escape)))
			{
				window.close();
				break;
			}
		}

		// clear the window
		window.clear(Color(255, 255, 0));

		// display the window
		window.display();

	}
	

	return EXIT_SUCCESS;
}