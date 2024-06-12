#pragma once

#include "Window.hpp"

#include <memory>

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

    std::unique_ptr< Window >& getWindow();

private:
    void moveMushroom();

    std::unique_ptr< Window > m_window;
    sf::Clock m_clock;
    sf::Time m_elapsed;

    sf::Texture m_mushroomTexture;
    sf::Sprite m_mushroomSprite;
    sf::Vector2i m_increment;
};
