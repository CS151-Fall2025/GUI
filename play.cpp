#include "play.h"
Play::Play()
{
    mRestart.setPosition(40, 400);
    mRestart.setSize(60, 20);
    mRestart.setString("Restart");

    mRules.setPosition(500, 400);
    mRules.setSize(60, 20);
    mRules.setString("Rules");
}
state Play::handleInput(sf::RenderWindow& window)
{
    if (mRestart.handleInput(window)){
        return GAME;
    }
    id (mRules.handleInput(window)){
        return RULES;
    }
    return GAME;
}
state Play::update(double elapsedTime, sf::RenderWindow& window)
{
    mChery.update(elapsedTime, window);
}
void Play::render(sf::RenderWindow& window)
{
    mChery.render();
    mRestart.draw();
    mRules.draw();
}