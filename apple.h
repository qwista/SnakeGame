/**
 * @file apple.h
 * @author Qwista
 * @date 2025
 * @version 1.0
 * @brief Fișier antet pentru clasa Apple din proiectul SnakeGame.
 *
 * Proiect: SnakeGame - Implementare a jocului clasic Snake în C++.
 */

#ifndef APPLE_H
#define APPLE_H

#include "point.h"

/**
 * @class Apple
 * @brief Reprezintă mărul plasat pe tabla de joc.
 *
 * Mărul are o poziție aleatoare pe tablă și este consumat de șarpe pentru a crește în lungime.
 */
class Apple {
private:
    Point position; ///< Poziția mărului pe tablă.

public:
    /**
     * @brief Constructor pentru inițializarea mărului la o poziție dată.
     * @param pos Poziția inițială a mărului.
     */
    Apple(const Point& pos) : position(pos) {}

    /**
     * @brief Returnează poziția curentă a mărului.
     * @return Poziția de tip Point.
     */
    Point getPosition() const { return position; }

    /**
     * @brief Setează o nouă poziție pentru măr.
     * @param newPos Noua poziție.
     */
    void setPosition(const Point& newPos) { position = newPos; }
};

#endif // APPLE_H