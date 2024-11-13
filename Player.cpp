#include "Player.h"
#include <iostream>

void Player::makeMove(Board& board) {
    int row, col;
    do {
        std::cout << "Enter your move (row and column): ";
        std::cin >> row >> col;
    } while (!board.makeMove(row - 1, col - 1, symbol));
}
