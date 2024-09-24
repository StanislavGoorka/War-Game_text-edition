#include <iostream>

#include "Card.h"
#include "Deck.h"

using namespace std;


int main()
{
    Deck obj;


    for (auto k : obj.get_deck())
    {
        cout << k.get_value() << " " << k.get_color() << endl;
    }


    return 0;
}