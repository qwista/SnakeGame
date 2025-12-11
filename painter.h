/**
 * @file painter.h
 * @author Qwista
 * @date 2025
 * @version 1.0
 * @brief Fișier antet pentru clasa Painter din proiectul SnakeGame.
 *
 * Proiect: SnakeGame - Implementare a jocului clasic Snake în C++.
 */

#ifndef PAINTER_H
#define PAINTER_H

#include "game_engine.h"
#include <iostream>  // Exemplu pentru output consolă; adaptează la bibliotecă grafică dacă este cazul.

/**
 * @class Painter
 * @brief Reprezintă componenta de desenare a jocului pe ecran.
 *
 * Această clasă se ocupă de afișarea tablei, șarpelui, mărului și altor elemente vizuale.
 */
class Painter {
private:
    const GameEngine& engine;  ///< Referință la motorul jocului pentru acces la date.

public:
    /**
     * @brief Constructor pentru inițializarea pictorului cu motorul jocului.
     * @param eng Instanța GameEngine.
     */
    Painter(const GameEngine& eng) : engine(eng) {}

    /**
     * @brief Desenează starea curentă a jocului pe ecran.
     */
    void draw() const;

    /**
     * @brief Afișează un mesaj de text (ex: scor, game over).
     * @param message Mesajul de afișat.
     */
    void displayMessage(const std::string& message) const {
        std::cout << message << std::endl;
    }
};

#endif // PAINTER_H