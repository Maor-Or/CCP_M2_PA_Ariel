#include <string>
#include <iostream>
#include "player.hpp"
using namespace std;

    Player::Player(string name){this->name = name;}
    // Player::Player(){this->name = "player1";}
    int Player::stacksize(){return 0;} //prints the amount of cards left. should be 21 but can be less if a draw was played
    int Player::cardesTaken(){return 0;} // prints the amount of cards this player has won. 


