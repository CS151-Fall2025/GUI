#ifndef GAME_H
#define GAME_H
#include "states.h"
#include "welcome.h"
#include "play.h"
#include "results.h"
#include <SFML/Graphics.hpp>

class Game
{
public:
    Game();
    ~Game(){};

    void handleInput(sf::RenderWindow& mWindow);
    void update(double elapsedTime, sf::RenderWindow& mWindow);
    void render(sf::RenderWindow& mWindow);
    bool isDone() const;

private:
    sf::RenderWindow mWindow;
    bool mIsDone;
    state mGameState;
    Welcome mWelcomeScreen;
    Play mGame;
    Results mResults;
   
};

#endif
