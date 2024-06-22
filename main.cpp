#include "Game.hpp"
#include "TimeStep.hpp"

int main()
{
    Game game;
    TimeStep timeStep;
    while( !game.getWindow()->isDone() )
    {
        game.handleInput();
        game.update(timeStep);
        game.render();
    }

    return 0;
}
