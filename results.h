#ifndef RESULTS_H
#define RESULTS_H

#include "button.h"
#include "states.h"
class Results
{
public:
    Results();
    state handleInput(sf::RenderWindow& window);
    state update(sf::RenderWindow& window);
    void render(sf::RenderWindow& window);


private:
    sf::Text mResults;
    Button mPlayAgain;  
    Button mLeave;
};

#endif