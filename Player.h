#ifndef PLAYER_H
#define PLAYER_H

#include "Board.h"

class Player {
public:
    explicit Player(char symbol) : symbol(symbol) {}
    char getSymbol() const { return symbol; }
    void makeMove(Board& board);
    
private:
    char symbol;
};

#endif
