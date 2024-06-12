#include "TimeStep.hpp"

TimeStep::TimeStep() : m_last_time( m_clock.getElapsedTime() )
{
    // Empty body.
}

float TimeStep::getDeltaTime()
{
    sf::Time currentTime = m_clock.getElapsedTime();
    sf::Time deltaTime = currentTime - m_last_time;

    m_last_time = currentTime;

    return deltaTime.asSeconds();
}
