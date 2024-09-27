cmake_minimum_required(VERSION 3.27)
project(War_Game_text_edition)

set(CMAKE_CXX_STANDARD 23)

add_executable(War_Game_text_edition main.cpp
        Card.cpp
        Card.hpp
        DeckManager.cpp
        DeckManager.hpp
        Player.cpp
        Player.hpp)
