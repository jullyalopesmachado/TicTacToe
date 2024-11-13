#ifndef GAME_H
#define GAME_H

#include "Board.h"
#include "Player.h"
#include "AI.h"

class Game {
public:
    Game();
    void start();
    
private:
    Board board;
    Player player;
    AI ai;
    bool isGameOver();
    void displayResult();
};

#endif
