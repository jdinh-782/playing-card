//
// Created by jdinh on 10/3/2020.
//

#ifndef CARD_LAB_OLDCARD_H
#define CARD_LAB_OLDCARD_H

#include <string>
#include <SFML/Graphics.hpp>
#include "Card.h"

using namespace std;

class OldCard : public sf::Drawable, sf::Transformable, Card
{
private:
    Card card;
    sf::RectangleShape cardBackground;
    sf::Text faceValue;
    sf::Sprite suit1;
    sf::Sprite suit2;
    sf::Font font;
    sf::Texture texture;
    string value, suit;

public:
    OldCard();
    OldCard(string setValue, string setSuit);

    virtual void draw (sf::RenderTarget &window, sf::RenderStates state) const;

    void setFaceValue();

    void setSuit();

    void setCard();
};


#endif //CARD_LAB_OLDCARD_H
