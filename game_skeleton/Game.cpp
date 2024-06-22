#include "Game.hpp"
#include "TimeStep.hpp"

Game::Game() : m_window( std::make_unique< Window >( "Simple Game", sf::Vector2u{ 800, 600 } ) )
{
    //restartClock();
    //srand( time( NULL ) );

    m_mushroomTexture.loadFromFile( "res/images/mushroom.png" );
    m_mushroomSprite.setTexture( m_mushroomTexture );
    m_increment = sf::Vector2i{ 400, 400 };
}

Game::~Game()
{
    // Empty body.
}

void Game::handleInput()
{
    // Input handle
}

void Game::update(TimeStep& timeStep)
{
    m_window->update();

    moveMushroom(timeStep);
}

void Game::render()
{
    m_window->beginDraw();

    m_window->draw( m_mushroomSprite );

    m_window->endDraw();
}

std::unique_ptr< Window >& Game::getWindow()
{
    return m_window;
}

void Game::moveMushroom(TimeStep& timeStep)
{
    sf::Vector2u windowSize = m_window->getWindowSize();
    sf::Vector2u textureSize = m_mushroomTexture.getSize();

    if( ( m_mushroomSprite.getPosition().x > windowSize.x - textureSize.x && m_increment.x > 0 ) ||
        ( m_mushroomSprite.getPosition().x < 0 && m_increment.x < 0 ) )
    {
        m_increment.x = -m_increment.x;
    }

    if( ( m_mushroomSprite.getPosition().y > windowSize.y - textureSize.y && m_increment.y > 0 ) ||
        ( m_mushroomSprite.getPosition().y < 0 && m_increment.y < 0 ) )
    {
        m_increment.y = -m_increment.y;
    }

    float elapsed = timeStep.getDeltaTime();

    m_mushroomSprite.setPosition( m_mushroomSprite.getPosition().x + ( m_increment.x * elapsed ),
                                  m_mushroomSprite.getPosition().y + ( m_increment.y * elapsed ) );
}
