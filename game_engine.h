/**
 * @file game_engine.h
 * @author Qwista
 * @date 2025
 * @version 1.0
 * @brief Fișier antet pentru clasa GameEngine din proiectul SnakeGame.
 *
 * Proiect: SnakeGame - Implementare a jocului clasic Snake în C++.
 */

#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include "snake.h"
#include "apple.h"
#include "board.h"
#include "direction.h"

/**
 * @class GameEngine
 * @brief Reprezintă motorul jocului, gestionând logica principală.
 *
 * Această clasă integrează șarpele, mărul, tabla și controlează fluxul jocului, inclusiv mișcarea, coliziunile și scorul.
 */
class GameEngine {
private:
    Snake snake;     ///< Instanța șarpelui.
    Apple apple;     ///< Instanța mărului.
    Board board;     ///< Instanța tablei.
    int score;       ///< Scorul curent.
    bool gameOver;   ///< Flag pentru sfârșitul jocului.

public:
    /**
     * @brief Constructor pentru inițializarea motorului jocului.
     * @param boardWidth Lățimea tablei.
     * @param boardHeight Înălțimea tablei.
     */
    GameEngine(int boardWidth, int boardHeight);

    /**
     * @brief Actualizează starea jocului (mișcă șarpele, verifică coliziuni etc.).
     */
    void update();

    /**
     * @brief Schimbă direcția șarpelui.
     * @param dir Noua direcție.
     */
    void changeDirection(Direction dir);

    /**
     * @brief Returnează dacă jocul s-a terminat.
     * @return True dacă jocul este over.
     */
    bool isGameOver() const { return gameOver; }

    /**
     * @brief Returnează scorul curent.
     * @return Valoarea scorului.
     */
    int getScore() const { return score; }

    /**
     * @brief Plasarea unui nou măr pe tablă la o poziție aleatoare.
     */
    void placeNewApple();
};

#endif // GAME_ENGINE_H