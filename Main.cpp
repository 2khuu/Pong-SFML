#include <iostream>
#include <SFML/Graphics.hpp>
#include "Header/Core/GameWindowManager.h"
#include "Header/Event/EventManager.h"


int main()
{
    // create window manager instance
    Core::GameWindowManager gameWindowManager;

    Events::EventManager eventManager;

    //Initialize the window
    gameWindowManager.initialize();

    while (gameWindowManager.isGamerunning()) {
        eventManager.pollEvents(gameWindowManager.getGameWindow());
        gameWindowManager.render();
    }

    return 0;
}