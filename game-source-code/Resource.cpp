#include "Resource.h"
#include <iostream>

sf::Texture Resources::playerTexture;
sf::Texture Resources::mountainTexture;

void Resources::loadResources()
{
    if(!playerTexture.loadFromFile("resources/players_spaceship.png"))
    {
        std::cerr<<"Failed to load file\n";
    }

    if(!mountainTexture.loadFromFile("resources/Mountain.png"))
    {
        std::cerr<<"Failed to load file\n";
    }
}