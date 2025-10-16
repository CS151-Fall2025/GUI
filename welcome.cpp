
#include "welcome.h"
Welcome::Welcome()
{
    if (!mFont.loadFromFile("college.ttf"))
    {
        std::cout<<"Error opening file\n";
        exit(2);
    }
    mHeader.setFont(mFont);
    //choose the font size based on button size (I choose half)
    mHeader.setCharacterSize(20);
    // //set label
    mHeader.setString("Welcome to My Game");

    mRules.setFont(mFont);
    //choose the font size based on button size (I choose half)
    mRules.setCharacterSize(16);
    // //set label
    mRules.setString("1. rulee 1\n2. rule 2\netc.\n");
    mRules.setPosition({10, 30});

    mStart.setPosition(40, 600);
    mStart.setSize(60, 20);
    mStart.setString("Start");
}
state Welcome::handleInput(sf::RenderWindow& window)
{
    if (mStart.handleInput(window)){
        return GAME;
    }
    return WELCOME;
}
state Welcome::update(sf::RenderWindow& window)
{
    mStart.update();
}
void Welcome::render(sf::RenderWindow& window)
{
    window.draw(mHeader);
    window.draw(mRules);
    window.draw(mStart);
}
