#include "Ball.h"

Ball::Ball() : ball(10.0f)
{
}

Ball::~Ball()
{
}

void Ball::Initialize()
{
    ball.setFillColor(sf::Color::White);
    ball.setPosition(sf::Vector2f(50.0f, 50.0f));
}

void Ball::Load()
{
}

void Ball::Update(sf::RenderWindow& window)
{
    //Movimento da bola segue o clique do mouse, so para teste de AI
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
        mousePos = sf::Mouse::getPosition(window);
        ball.setPosition(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
    }
}

void Ball::Draw(sf::RenderWindow &window)
{
    window.draw(ball);
}
