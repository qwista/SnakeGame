#include "game_engine.hpp"
#include <iostream>

GameEngine::GameEngine() 
    : _apple({5, 5}), _snake({0, 0}), _board(20, 20) {}

void GameEngine::Init() {
    
    _snake = Snake({10, 10});
    _apple = Apple({5, 5});
}

void GameEngine::Run() {
    std::cout << "Jocul a pornit!\n";
    char input;
    while (true) {
        std::cout << "Apasa w pentru a iesi...\n";
        std::cin >> input;
        if (input == 'w') break;
    }
    std::cout << "Joc terminat.\n";
}

