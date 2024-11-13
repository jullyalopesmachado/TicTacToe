#include "Game.h"
#include <iostream>

Game::Game() : player('X'), ai('O') {}

void Game::start() {
    board.reset();
    bool playerTurn = true;
    while (!isGameOver()) {
        board.display();
        
        if (playerTurn) {
            player.makeMove(board);
        } else {
            ai.makeMove(board);
        }
        
        playerTurn = !playerTurn;
    }
    
    board.display();
    displayResult();
}

bool Game::isGameOver() {
    return board.checkWin(player.getSymbol()) || 
           board.checkWin(ai.getSymbol()) || 
           board.isFull();
}

void Game::displayResult() {
    if (board.checkWin(player.getSymbol())) {
        std::cout << "You win!\n";
    } else if (board.checkWin(ai.getSymbol())) {
        std::cout << "AI wins!\n";
    } else {
        std::cout << "It's a draw!\n";
    }
}
