#include <iostream>

#include "Card.h"
#include "Deck.h"

using namespace std;


int main()
{
    Deck obj;
    Deck obj_test;

    for (unsigned short int i = 0; i < obj.get_deck().size(); i++) {
        Card current_obj_card = obj.get_deck().at(i);
        Card current_obj_test_card = obj_test.get_deck().at(i);

        cout << current_obj_card.get_value() << " " << current_obj_card.get_color() << "            " << current_obj_test_card.get_value() << " " << current_obj_test_card.get_color() << endl;
    }


    return 0;
}