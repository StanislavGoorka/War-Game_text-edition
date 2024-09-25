#include <iostream>

#include "Card.h"
#include "Player.h"

using namespace std;


int main()
{
    Player obj;

    for (auto item : *obj.get_players_deck()->get_deck_instance())
        cout << item.get_value() << " " << item.get_color() << endl;


    cout << endl << endl << endl << endl;

    Card drawn_card = obj.draw_card();
    cout << drawn_card.get_value() << " " << drawn_card.get_color() << endl << endl << endl << endl;

    for (auto item : *obj.get_players_deck()->get_deck_instance())
        cout << item.get_value() << " " << item.get_color() << endl;


    return 0;
}