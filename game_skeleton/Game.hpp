#pragma once

#include "Window.hpp"

class Game
{
public:
    Game();

    ~Game();

    void handleInput();
    void update();
    void render();

    sf::Time getElapsed();
    void restartClock();

    Window* getWindow();

private:
    void moveMushroom();

    Window m_window;
    sf::Clock m_clock;
    sf::Time m_elapsed;

    sf::Texture m_mushroomTexture;
    sf::Sprite m_mushroomSprite;
    sf::Vector2i m_increment;
};
