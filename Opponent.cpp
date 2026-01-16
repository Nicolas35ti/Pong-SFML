#include "Opponent.h"

Opponent::Opponent() : opponentSpeed(0.5f)
{
}

Opponent::~Opponent()
{
}

void Opponent::Initialize()
{
    opponentRectangle.setSize(sf::Vector2f(15, 50));
    opponentRectangle.setFillColor(sf::Color::White);
    opponentRectangle.setPosition(sf::Vector2f(785, 0));
}

void Opponent::Load()
{
}

void Opponent::Update(Ball& ball)
{
    ballPos = ball.ball.getPosition();

    if (ballPos.y > opponentRectangle.getPosition().y) {
        opponentRectangle.setPosition(opponentRectangle.getPosition() + sf::Vector2f(0, 1) * opponentSpeed);
    } else {
        opponentRectangle.setPosition(opponentRectangle.getPosition() + sf::Vector2f(0, -1) * opponentSpeed);
    }
}

void Opponent::Draw(sf::RenderWindow& window)
{
    window.draw(opponentRectangle);
}
