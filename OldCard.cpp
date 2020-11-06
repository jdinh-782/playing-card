//
// Created by jdinh on 10/3/2020.
//

#include "OldCard.h"

OldCard::OldCard()
{
    value = "Ace";
    suit = "Hearts";
}


OldCard::OldCard(string setValue, string setSuit)
{
    value = setValue;
    suit = setSuit;
}


void OldCard::setFaceValue()
{
    //check for specific card values and convert them
    value = card.changeFaceValue(value);

    if (!font.loadFromFile("OpenSans-Bold.ttf"))
    {
        exit(1);
    }

    if (suit == "Hearts" || suit == "Diamonds")
    {
        faceValue.setFillColor(sf::Color::Red);
    }

    else
    {
        faceValue.setFillColor(sf::Color::Black);
    }

    faceValue.setFont(font);
    faceValue.setString(value);
    faceValue.setStyle(sf::Text::Bold);
    faceValue.setCharacterSize(125);
    faceValue.setPosition(430,300);
}


void OldCard::setSuit()
{
    if (!texture.loadFromFile("heart.png"))
    {
        exit(1);
    }

    if (suit == "Hearts")
    {
        texture.loadFromFile("heart.png");
    }

    else if (suit == "Spades")
    {
        texture.loadFromFile("spades.png");
    }

    else if (suit == "Clubs")
    {
        texture.loadFromFile("clubs.png");
    }

    else if (suit == "Diamonds")
    {
        texture.loadFromFile("diamonds.png");
    }

    suit1.setTexture(texture);
    suit1.setPosition(250, 100);

    suit2.setTexture(texture);
    suit2.setPosition(700,700);
    suit2.setRotation(180);
}


void OldCard::setCard()
{
    cardBackground.setFillColor(sf::Color(255,255,255));
    cardBackground.setPosition(sf::Vector2f(250, 100));
    cardBackground.setSize(sf::Vector2f(450, 600));
}


void OldCard::draw (sf::RenderTarget &window, sf::RenderStates state) const
{
    window.draw(cardBackground);
    window.draw(faceValue);
    window.draw(suit1);
    window.draw(suit2);
}