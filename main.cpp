#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Card
{
private:
    unsigned short int value;
    string color;

public:
    Card(unsigned short int VALUE, string COLOR) :
            value(VALUE), color(COLOR){};

    unsigned short int get_value() { return value; };
    string get_color() { return color; };
};

class Deck
{
private:
    vector<Card> deck;

public:
    vector<Card> create_deck()
    {
        vector<Card> deck;
        vector<string> colors = {"diamond", "heart", "spade", "club"};
        vector<unsigned short int> values;

        for(unsigned short int i = 2; i <= 14; i++) {values.push_back(i);}

        for (auto i : values)
        {
            for (auto j : colors)
            {
                deck.push_back(Card(i, j));
            }
        }

        return deck;
    }

    vector<Card> get_deck() { return deck; }


    Deck() { deck = create_deck(); }
};


int main()
{
    Deck obj;

    for (auto k : obj.get_deck())
    {
        cout << k.get_value() << " " << k.get_color() << endl;
    }


    return 0;
}