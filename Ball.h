#pragma once
#include <SFML/Graphics.hpp>

class Ball {
    public:
    sf::CircleShape ball;
    sf::Vector2i mousePos;

    public:
    Ball();
    ~Ball();

    public:
    void Initialize();
    void Load();
    void Update(sf::RenderWindow& window);
    void Draw(sf::RenderWindow& window);
};