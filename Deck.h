//
// Created by metre on 23.09.2024.
//

#ifndef DECK_H
#define DECK_H

#include <vector>
#include <algorithm>
#include <random>
#include "Card.h"

class Deck
{
private:
    std::vector<Card> deck;

public:
    Deck();

    std::vector<Card> create_deck();
    std::vector<Card> get_deck();
    std::vector<Card>* get_deck_instance();
    void shuffle_deck(Deck &target);
    Card draw_card();

};



#endif //DECK_H
