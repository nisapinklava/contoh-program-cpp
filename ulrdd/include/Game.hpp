#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <list>

#include "Player.hpp"

using namespace std;

class Game
{
public:
    Game();
    ~Game();

    void setGameState(bool state);
    bool getGameState();

    void setup();

    void createBoard();

    void createPlayers();

    void checkPosition();
    void move();

    vector<Player> &getListPlayers();
    void setListPlayers(vector<Player> lp);
    Player &getPlayer();
    Player &getPlayer(int index);

    void setActivePlayer();

    int rollDice();
    void enterToCon();

private:
    mutable vector<Player> listPlayers;
    mutable int activePlayer = 0;
    map<int, int> ladders;
    map<int, int> snakes;
    mutable bool GameState = true;
};