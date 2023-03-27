
#include <iostream>
#include <stdexcept>
#include <string>
#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Test 1 - checking for valids and invalid initializations") {

    //valid initializations
    CHECK_NOTHROW( Player p1("Maor"));  
    CHECK_NOTHROW(Player p2("Or"));     
    CHECK_NOTHROW(Game(Player("Maor"),Player("Or")));     
    
    //invalid initializations
    CHECK_THROWS(Game(Player(""),Player("")));      
    CHECK_THROWS(Game(Player(""),Player("Maor")));  
    CHECK_THROWS(Game(Player("Maor"),Player("")));  
    
    Player p1("Raz");
    CHECK_THROWS(Game(p1,p1));                      

}

TEST_CASE("Test 2 - player's functions") {
    Player p1("Maor");
    Player p2("Or");

    Game game(p1,p2);
    CHECK(p1.stacksize() == 26);
    CHECK(p2.stacksize() == 26);
    CHECK(p1.cardesTaken() == 0);
    CHECK(p2.cardesTaken() == 0);
}

TEST_CASE("Test 3 - Game's functions") {
    Player p1("Lior");
    Player p2("Ely");

    Game game(p1,p2);

    //a full course of a game should be w/o errors
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.printWiner());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());

    Game game2(p1,p2);
    CHECK_THROWS(game2.printLastTurn()); //no turn was yet played
    for (int i=0;i<2;i++) 
    {
        game2.playTurn();
        CHECK(p1.stacksize() > 0);
        CHECK(p2.stacksize() > 0);
    }
    game2.playAll();
    bool res = (p1.stacksize() > 0 || p2.stacksize() > 0);
    CHECK(res);

    
}

