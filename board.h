/**
 * @file board.h
 * @author Qwista
 * @date 2025
 * @version 1.0
 * @brief Fișier antet pentru clasa Board din proiectul SnakeGame.
 *
 * Proiect: SnakeGame - Implementare a jocului clasic Snake în C++.
 */

#ifndef BOARD_H
#define BOARD_H

#include "point.h"

/**
 * @class Board
 * @brief Reprezintă tabla de joc, incluzând dimensiunile și verificările de limite.
 *
 * Tabla definește spațiul în care se desfășoară jocul, cu lățime și înălțime specificate.
 */
class Board {
private:
    int width;  ///< Lățimea tablei.
    int height; ///< Înălțimea tablei.

public:
    /**
     * @brief Constructor pentru inițializarea tablei cu dimensiuni date.
     * @param w Lățimea tablei.
     * @param h Înălțimea tablei.
     */
    Board(int w, int h) : width(w), height(h) {}

    /**
     * @brief Returnează lățimea tablei.
     * @return Valoarea lățimii.
     */
    int getWidth() const { return width; }

    /**
     * @brief Returnează înălțimea tablei.
     * @return Valoarea înălțimii.
     */
    int getHeight() const { return height; }

    /**
     * @brief Verifică dacă o poziție este în interiorul limitelor tablei.
     * @param pos Poziția de verificat.
     * @return True dacă poziția este validă, false altfel.
     */
    bool isInside(const Point& pos) const {
        return pos.x >= 0 && pos.x < width && pos.y >= 0 && pos.y < height;
    }
};

#endif // BOARD_H