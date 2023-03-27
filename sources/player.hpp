#pragma once

#include <string>
#include <iostream>
using namespace std;

namespace ariel{};
class Player
{
    public:
        string name;
        Player(string name);
        // Player();
        int stacksize(); //prints the amount of cards left. should be 21 but can be less if a draw was played
        int cardesTaken(); // prints the amount of cards this player has won. 

};
