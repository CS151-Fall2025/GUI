#ifndef PLAY_H
#define PLAY_H
#include "states.h"
#include "button.h"
#include "cherry.h"

class Play
{
public:
    Play();
    state handleInput(sf::RenderWindow& window);
    state update(double elapsedTime, sf::RenderWindow& window);
    void render(sf::RenderWindow& window);


private:
    Cherry mChery;
    Button mRestart;  
    Button mRules;
};

#endif