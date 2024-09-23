//
// Created by metre on 23.09.2024.
//

#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Card.h"

class Deck
{
private:
    std::vector<Card> deck;

public:
    Deck();

    std::vector<Card> create_deck();
    std::vector<Card> get_deck();
};



#endif //DECK_H
