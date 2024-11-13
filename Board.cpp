#include "Board.h"
#include <iostream>

Board::Board() : grid(3, std::vector<char>(3, ' ')) {}

void Board::reset() {
    for (auto& row : grid)
        std::fill(row.begin(), row.end(), ' ');
}

bool Board::isFull() const {
    for (const auto& row : grid)
        for (char cell : row)
            if (cell == ' ') return false;
    return true;
}

bool Board::checkWin(char symbol) const {
    return checkRows(symbol) || checkCols(symbol) || checkDiagonals(symbol);
}

bool Board::makeMove(int row, int col, char symbol) {
    if (grid[row][col] == ' ') {
        grid[row][col] = symbol;
        return true;
    }
    return false;
}

void Board::display() const {
    for (const auto& row : grid) {
        for (char cell : row) {
            std::cout << cell << " ";
        }
        std::cout << "\n";
    }
}

bool Board::checkRows(char symbol) const {
    for (const auto& row : grid)
        if (row[0] == symbol && row[1] == symbol && row[2] == symbol)
            return true;
    return false;
}

bool Board::checkCols(char symbol) const {
    for (int col = 0; col < 3; ++col)
        if (grid[0][col] == symbol && grid[1][col] == symbol && grid[2][col] == symbol)
            return true;
    return false;
}

bool Board::checkDiagonals(char symbol) const {
    return (grid[0][0] == symbol && grid[1][1] == symbol && grid[2][2] == symbol) ||
           (grid[0][2] == symbol && grid[1][1] == symbol && grid[2][0] == symbol);
}
