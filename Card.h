//
// Created by jdinh on 10/3/2020.
//

#ifndef CARD_LAB_CARD_H
#define CARD_LAB_CARD_H

#include <string>
#include <iostream>

using namespace std;

class Card
{
private:
    string value, suit;

public:
    Card();
    Card(string setValue, string setSuit);

    string changeFaceValue(string& value);
    string returnFaceValue() const;
    string returnSuit() const;

    friend ostream& operator<<(ostream& output, const Card& card);

};


#endif //CARD_LAB_CARD_H
