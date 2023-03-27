#pragma once

#include <iostream>
#include "player.hpp"
using namespace std;
// using namespace ariel;
// namespace ariel{};
    class Game
    {
        Player p1; Player p2;
        public:
            Game( Player p1,Player p2);
            ~Game();
            void printLastTurn();
            void playTurn(); 
            void playAll();     //playes the game untill the end
            void printWiner();  // prints the name of the winning player
            void printLog();    // prints all the turns played one line per turn (same format as game.printLastTurn())
            void printStats();  // for each player prints basic statistics: win rate, cards won, <other stats you want to print>. Also print the draw rate and amount of draws that happand. (draw within a draw counts as 2 draws. )


    };
