//
// Created by metre on 23.09.2024.
//

#ifndef CARD_H
#define CARD_H

#include <string>

class Card {
    private:
        unsigned short int value;
        std::string color;

    public:
        Card(unsigned short int value, std::string color);

        unsigned short int get_value();
        std::string get_color();
};


#endif //CARD_H
