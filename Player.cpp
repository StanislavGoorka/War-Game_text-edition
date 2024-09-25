//
// Created by metre on 24.09.2024.
//

#include "Player.h"

Player::Player() = default;

Card Player::draw_card() {
    std::vector<Card>* current_deck_instance = this->get_players_deck()->get_deck_instance();

    Card drawn = current_deck_instance->at(0);
    current_deck_instance->erase(current_deck_instance->begin());

    return drawn;
}