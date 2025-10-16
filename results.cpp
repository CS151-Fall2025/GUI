#include "results.h"
Results::Results()
{
    if (!mFont.loadFromFile("college.ttf"))
    {
        std::cout<<"Error opening file\n";
        exit(2);
    }
    mResults.setFont(mFont);
    //choose the font size based on button size (I choose half)
    mHeader.setCharacterSize(60);
    // //set label
    mHeader.setString("Results");


    mPlayAgain.setPosition(40, 600);
    mPlayAgain.setSize(60, 20);
    mPlayAgain.setString("Play Again");

    mLeave.setPosition(500, 600);
    mLeave.setSize(60, 20);
    mLeave.setString("Rules");
}
state Results::handleInput(sf::RenderWindow& window)
{
    if (mPlayAgain.handleInput(window)){
        return GAME;
    }
    if (mLeave.handleInput(window)){
        return WELCOME;
    }
    return RESULTS;
}

state Results::update(sf::RenderWindow& window)
{
    mPlayAgain.update();
    mLeave.update();  
}
void Results::render(sf::RenderWindow& window);
{
    window.draw(mResults);
    window.draw(mPlayAgain);
    window.draw(mLeave);
}