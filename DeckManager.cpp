//
// Created by metre on 23.09.2024.
//

#include "DeckManager.hpp"


std::vector<Card> Deck::create_deck() {
    std::vector<Card> temp_deck;
    std::vector<std::string> colors = {"diamond", "heart", "spade", "club"};
    std::vector<unsigned short int> values;

    for(unsigned short int i = 2; i <= 14; i++) { values.push_back(i); }

    for (auto i: values)
        for (const auto &j: colors)
            temp_deck.emplace_back(i, j);


    return temp_deck;

}

std::vector<Card> Deck::get_deck() { return deck; }
std::vector<Card>* Deck::get_deck_instance() { return &deck; }

void Deck::shuffle_deck() {
    std::vector<Card>* current_deck;
    current_deck = this->get_deck_instance();

    auto rd = std::random_device {};
    auto rng = std::default_random_engine { rd() };

    std::shuffle(current_deck->begin(), current_deck->end(), rng);
}

Deck::Deck()
: deck(create_deck()) {
    for (unsigned short int i = 1; i <= 5; i++)
        shuffle_deck();
}
