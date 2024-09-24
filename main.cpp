#include <iostream>

#include "Card.h"
#include "Deck.h"

using namespace std;


int main()
{
    Deck obj;
    for (int i = 1; i <= 15; i++) {
        Card selected_card = obj.draw_card();
        cout << selected_card.get_value() << " " << selected_card.get_color() << endl;
    }

    cout << endl << endl << endl;

    for (auto i : *obj.get_deck_instance())
        cout << i.get_value() << " " << i.get_color() << endl;


    return 0;
}