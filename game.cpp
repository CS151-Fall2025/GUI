#include "game.h"

Game::Game()
{
    mIsDone = false;
    mGameState = WELCOME;
}

//Handle events from input devices and the window
void Game::handleInput(sf::RenderWindow& window)
{
    sf::Event event;
    while(window.pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
        {
            // Close window button clicked.
            window.close();
        }
        switch (mGameState)
        {
        case WELCOME:
            mGameState=mWelcomeScreen.handleInput(window);
            break;
            
        }
    }
}

//Update objects in the scene
void Game::update(double elapsedTime, sf::RenderWindow& window)
{
    
}


//Render objects from the scene onto the window
void Game::render(sf::RenderWindow& window)
{
    mWindow.clear(sf::Color::Black);
    //mWindow.draw(mCherryPlant);
    mWindow.display();
}

//Check if game is done, right now, we just checked if window is still open
bool Game::isDone() const
{
    return (!mWindow.isOpen() || mIsDone);
}
