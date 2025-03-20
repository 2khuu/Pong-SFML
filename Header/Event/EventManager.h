#pragma once
#include <SFML/Graphics.hpp>

namespace Events {
	class EventManager {
	public:
		void pollEvents(sf::RenderWindow* game_window);
		bool isKeyPressed(sf::Keyboard::Key key);
	};
}