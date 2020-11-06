//
// Created by jdinh on 10/3/2020.
//

#include "Card.h"

Card::Card()
{
    value = "Ace";
    suit = "Hearts";
}


Card::Card(string setValue, string setSuit)
{
    value = setValue;
    suit = setSuit;
}


string Card::changeFaceValue(string& value)
{
    if (value == "Ace")
    {
        value = "A";
    }

    else if (value == "Jack")
    {
        value = "J";
    }

    else if (value == "Queen")
    {
        value = "Q";
    }

    else if (value == "King")
    {
        value = "K";
    }

    else
    {
        value = value;
    }

    return value;
}


string Card::returnFaceValue() const
{
    return value;
}


string Card::returnSuit() const
{
    return suit;
}


ostream& operator<<(ostream& output, const Card& card)
{
    output << card.returnFaceValue() << " of " << card.returnSuit();
    return output;
}
