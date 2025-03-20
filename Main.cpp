#include <iostream>
#include <SFML/Graphics.hpp>
#include "Header/Core/GameWindowManager.h"

int main()
{
    // create window manager instance
    Core::GameWindowManager gameWindowManager;

    //Initialize the window
    gameWindowManager.initialize();

    while (gameWindowManager.isGamerunning()) {
        gameWindowManager.render();
    }

    return 0;
}