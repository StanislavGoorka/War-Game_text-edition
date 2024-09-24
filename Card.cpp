//
// Created by metre on 23.09.2024.
//
#include "Card.h"


Card::Card(unsigned short int VALUE, std::string COLOR) :
value(VALUE), color(COLOR) {};


unsigned short int Card::get_value() { return value; }
std::string Card::get_color() { return color; }
