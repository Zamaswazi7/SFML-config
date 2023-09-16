#pragma once
#include <SFML/Graphics.hpp>

class Game {
public:
    Game();
    ~Game();

    void run();

private:
    sf::RenderWindow window;
    bool isRunning;

    // Add other game-related variables and functions here

    void handleInput();
    void update();
    void render();
};
