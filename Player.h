#pragma once
#include <SFML/Graphics.hpp>

class Player {
    public:
    sf::RectangleShape playerRectangle;

    void Initialize();
    void Load();
    void Update();
    void Draw(sf::RenderWindow& window);
};