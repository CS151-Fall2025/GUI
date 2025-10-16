#ifndef WELCOME_H
#define WELCOME_H
#include "states.h"
#include "button.h"

class Welcome
{
public:
    Welcome();
    state handleInput(sf::RenderWindow& mWindow);
    state update(sf::RenderWindow& mWindow);
    void render(sf::RenderWindow& mWindow);


private:
    sf::Text mRules;
    sf::Text mHeader;
    sf::Font mFont;
    Button mStart;  
};

#endif