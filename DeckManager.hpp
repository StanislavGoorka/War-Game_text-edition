//
// Created by metre on 23.09.2024.
//

#pragma once

#include <vector>
#include <algorithm>
#include <random>
#include "Card.hpp"

class Deck
{
private:
    std::vector<Card> deck;

public:
    Deck();

    std::vector<Card> create_deck();
    std::vector<Card> get_deck();
    std::vector<Card>* get_deck_instance();
    void shuffle_deck();

};