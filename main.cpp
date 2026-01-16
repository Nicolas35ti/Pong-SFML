#include <SFML/Graphics.hpp>
#include <iostream>

#include "Player.h"
#include "Opponent.h"
#include "Ball.h"

int main() {
    //----------- INITIALIZE
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode(800, 500), "PONG SFML", sf::Style::Default, settings);
    window.setFramerateLimit(360);

    Ball ball;
    Player player;
    Opponent opponent;

    ball.Initialize();
    player.Initialize();
    opponent.Initialize();

    ball.Load();
    player.Load();
    opponent.Load();

    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

    ball.Update(window);
    player.Update();
    opponent.Update(ball);

    window.clear(sf::Color::Black);

    ball.Draw(window);
    player.Draw(window);
    opponent.Draw(window);

    window.display();
    
    }

    return 0;
}