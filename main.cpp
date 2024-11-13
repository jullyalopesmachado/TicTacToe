#include "Game.h"
#include <iostream>
#include <string>
int main() {
    Game game;
    char playAgain;
    
    do {
        game.start();
        std::cout << "Play again? (y/n): ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
    
    return 0;
}
