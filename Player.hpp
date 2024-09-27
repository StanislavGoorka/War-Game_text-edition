//
// Created by metre on 24.09.2024.
//

#pragma once

#include "DeckManager.hpp"

class Player {
private:
    Deck players_deck;

public:
    Player();

    Deck* get_players_deck() { return &players_deck; }

    Card draw_card();
};
