//
// Created by metre on 24.09.2024.
//

#ifndef PLAYER_H
#define PLAYER_H

#include "Deck.h"

class Player {
private:
    Deck players_deck;

public:
    Player();

    Deck* get_players_deck() { return &players_deck; }

    Card draw_card();
};


#endif //PLAYER_H
