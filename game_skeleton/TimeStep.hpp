#pragma once

#include <SFML/System/Clock.hpp>

class TimeStep
{
public:
    TimeStep();

    float getDeltaTime();

private:
    sf::Clock m_clock;
    sf::Time m_last_time;
};
