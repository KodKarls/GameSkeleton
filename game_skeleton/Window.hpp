#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <string>

class Window
{
public:
    Window();
    Window( const std::string& title, const sf::Vector2u& size );

    ~Window();

    void update();

    void beginDraw();
    void draw( sf::Drawable& drawable );
    void endDraw();

    void toggleFullscreen();

    bool isDone() const;
    bool isFullscreen() const;
    sf::Vector2u getWindowSize();

private:
    void setup( const std::string& title, const sf::Vector2u& size );
    void create();
    void destroy();

    sf::RenderWindow m_window;
    sf::Vector2u m_windowSize;
    std::string m_windowTitle;

    bool m_isDone;
    bool m_isFullscreen;
};
