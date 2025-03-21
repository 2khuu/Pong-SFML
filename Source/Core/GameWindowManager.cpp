#include "../../Header/Core/GameWindowManager.h"

namespace Core {
	void GameWindowManager::initialize() {
		game_window = new RenderWindow();
		createGameWindow();
	}

	void GameWindowManager::createGameWindow() {
		game_window->create(
			sf::VideoMode::getDesktopMode(),
			game_title,
			sf::Style::Fullscreen);
	}

	bool GameWindowManager::isGamerunning() {
		return game_window->isOpen();
	}

	void GameWindowManager::render() {
		game_window->clear(sf::Color(200, 50, 50, 255));

		game_window->display();
	}

	RenderWindow* GameWindowManager::getGameWindow() {
		return game_window;
	}
}