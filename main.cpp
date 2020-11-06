#include <iostream>
#include "OldCard.h"
#include "Card.h"
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
    OldCard oldCard("Ace", "Hearts");
    Card card("Ace", "Hearts");

    cout << card;

    sf::RenderWindow window({1024, 768, 32}, "Card Lab");

    oldCard.setCard();
    oldCard.setFaceValue();
    oldCard.setSuit();

    while (window.isOpen())
    {
        sf::Event event{};

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        window.clear({0, 0 , 0});
        window.draw(oldCard);
        window.display();
    }

    return 0;
}
