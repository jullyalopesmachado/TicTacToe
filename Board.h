#ifndef BOARD_H
#define BOARD_H

#include <vector>

class Board {
public:
    Board();
    void reset();
    bool isFull() const;
    bool checkWin(char symbol) const;
    bool makeMove(int row, int col, char symbol);
    void display() const;
    
private:
    std::vector<std::vector<char> > grid;
    bool checkRows(char symbol) const;
    bool checkCols(char symbol) const;
    bool checkDiagonals(char symbol) const;
};

#endif
