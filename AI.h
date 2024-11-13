#ifndef AI_H
#define AI_H

#include "Board.h"

class AI {
public:
    explicit AI(char symbol) : symbol(symbol) {}
    char getSymbol() const { return symbol; }
    void makeMove(Board& board);
    
private:
    char symbol;
};

#endif
