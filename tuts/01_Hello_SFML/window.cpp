// We are using SFML
#include <SFML/Window.hpp>

const int W_WIDTH = 800;
const int W_HEIGHT = 600;

int main( ) {
	sf::Window window(sf::VideoMode(W_WIDTH, W_HEIGHT), "SFML Now!");

	while ( window.isOpen()) {
		// check the window's events that were just done
		sf::Event event;
		while ( window.pollEvent( event ) ) {
			// Just handling the close event now.
			if ( event.type == sf::Event::Closed ) {
				window.close();
			}
		}
	}
}

