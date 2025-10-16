#include "cherry.h"
Cherry::Cherry() 
{
    mTextureTile.loadFromFile("rpg_textures.png");
    mCherryPlant.setRadius(31);
    mCherryPlant.setTexture(&mTextureTile);
    mCherryPlant.setTextureRect(sf::IntRect(64, 32, 62, 62));
    mCherryPlant.setOrigin(62.f / 2.f, 62.f / 2.f);

    mIncrement = sf::Vector2f(4.f, 4.f);
    mIsDone = false;
}


//Update objects in the scene
void Cherry::update(double elapsedTime, sf::RenderWindow& window)
{
    moveCherry(elapsedTime, window);
}
//
void Cherry::moveCherry(double elapsedTime, sf::RenderWindow& window)
{
    sf::Vector2u winSize = window.getSize();
    int cherryX = 62;
    int cherryY = 62;
    double speed = 60;

    if ((mCherryPlant.getPosition().x + (cherryX / 2) > winSize.x && mIncrement.x > 0) ||
        (mCherryPlant.getPosition().x - (cherryX / 2) < 0 && mIncrement.x < 0))
    {
        // Reverse the direction on X axis
        mIncrement.x = -mIncrement.x;
    }

    if ((mCherryPlant.getPosition().y + (cherryY / 2) > winSize.y && mIncrement.y > 0) ||
        (mCherryPlant.getPosition().y - (cherryY / 2) < 0 && mIncrement.y < 0))
    {
        // Reverse the direction on Y axis.
        mIncrement.y = -mIncrement.y;
    }

    mCherryPlant.setPosition(
        mCherryPlant.getPosition().x + mIncrement.x*speed*elapsedTime,
        mCherryPlant.getPosition().y + mIncrement.y*speed*elapsedTime);
}

//Render objects from the scene onto the window
void Cherry::render(sf::RenderWindow& window)
{
    window.draw(mCherryPlant);
}

