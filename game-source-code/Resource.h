#pragma once
#include <SFML/Graphics.hpp>

class Resources {
public:
    static sf::Texture playerTexture;
    static sf::Texture mountainTexture;

    static void loadResources();
};
