#ifndef CHERRY_H
#define CHERRY_H
#include <SFML/Graphics.hpp>

class Cherry
{
public:
    Cherry();

    void update(double elapsedTime, sf::RenderWindow& window);
    void render(sf::RenderWindow& window);
    void setBondary(int topLeft, int buttom);

private:
    bool mIsDone;

    sf::Texture mTextureTile;
    sf::CircleShape mCherryPlant;
    sf::Vector2f mIncrement;

    void moveCherry(double elapsedTime, sf::RenderWindow& window);
   
};
#endif
