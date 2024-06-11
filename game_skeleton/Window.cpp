#include "Window.hpp"

Window::Window()
{
    setup( "Game Skeleton", sf::Vector2u{ 640, 480 } );
}

Window::Window( const std::string& title, const sf::Vector2u& size )
{
    setup( title, size );
}

Window::~Window()
{
    destroy();
}

void Window::update()
{
    sf::Event event{};

    while( m_window.pollEvent( event ) )
    {
        if( event.type == sf::Event::Closed )
        {
            m_isDone = true;
        }
        else if( event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::F5 )
        {
            toggleFullscreen();
        }
    }
}

void Window::beginDraw()
{
    m_window.clear( sf::Color::Black );
}

void Window::draw( sf::Drawable& drawable )
{
    m_window.draw( drawable );
}

void Window::endDraw()
{
    m_window.display();
}

void Window::toggleFullscreen()
{
    m_isFullscreen = !m_isFullscreen;
    destroy();
    create();
}

bool Window::isDone() const
{
    return m_isDone;
}

bool Window::isFullscreen() const
{
    return m_isFullscreen;
}

sf::Vector2u Window::getWindowSize()
{
    return m_windowSize;
}

void Window::setup( const std::string& title, const sf::Vector2u& size )
{
    m_windowTitle = title;
    m_windowSize = size;
    m_isFullscreen = false;
    m_isDone = false;
    m_window.setFramerateLimit( 60 );
    create();
}

void Window::create()
{
    auto style = ( m_isFullscreen ? sf::Style::Fullscreen : sf::Style::Default );
    m_window.create( { m_windowSize.x, m_windowSize.y, 32 },
                     m_windowTitle, style );
}

void Window::destroy()
{
    m_window.close();
}
