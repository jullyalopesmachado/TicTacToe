#include "AI.h"
#include <cstdlib>

void AI::makeMove(Board& board) {
    int row, col;
    do {
        row = std::rand() % 3;
        col = std::rand() % 3;
    } while (!board.makeMove(row, col, symbol));
}
