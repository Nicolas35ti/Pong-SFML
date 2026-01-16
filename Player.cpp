#include "Player.h"

void Player::Initialize()
{
    playerRectangle.setSize (sf::Vector2f(15, 50));
    playerRectangle.setFillColor(sf::Color::White);
    playerRectangle.setPosition(sf::Vector2f(0, 0));
}

void Player::Load()
{
}

void Player::Update()
{
    sf::Vector2f position = playerRectangle.getPosition();

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        playerRectangle.setPosition(position + sf::Vector2f(0, -1));
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        playerRectangle.setPosition(position + sf::Vector2f(0, 1));
    }
}

void Player::Draw(sf::RenderWindow &window)
{
    window.draw(playerRectangle);
}
