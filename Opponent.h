#pragma once
#include <SFML/Graphics.hpp>

#include "Ball.h"

class Opponent {
    public:
    float opponentSpeed;
    sf::Vector2f ballPos;
    sf::RectangleShape opponentRectangle;

    Opponent();
    ~Opponent();
    void Initialize();
    void Load();
    void Update(Ball& ball);
    void Draw(sf::RenderWindow& window);
};