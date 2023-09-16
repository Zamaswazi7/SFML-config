#include "Game.h"
#include "Resource.h"

Game::Game() : window(sf::VideoMode(800, 600), "Defender Game"), isRunning(true) {
    // Initialize game variables, load resources, etc.
}

Game::~Game() {
    // Cleanup resources, if needed
}

void Game::run() {

     Resources::loadResources(); // Load textures

    // Create player sprite
    sf::Sprite player(Resources::playerTexture);
    //player.setScale(2.0f,2.0f);
    player.setPosition(100.0f, 300.0f); // Set initial position

    // Create mountain sprite
    sf::Sprite mountain(Resources::mountainTexture);
    mountain.setPosition(0.0f, 400.0f); // Set initial position

    while (isRunning) {
        handleInput();
        update();
        //render();
        // Clear the window
        window.clear();

        // Draw game elements
        window.draw(mountain);
        window.draw(player);

        // Display the updated frame
        window.display();
    }
}

void Game::handleInput() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
            isRunning = false;
        }
        // Handle other input events here (e.g., keyboard/mouse input)
    }
}

void Game::update() {
    // Update game logic here
}

void Game::render() {
    window.clear();
    // Draw game elements here
    window.display();
}
