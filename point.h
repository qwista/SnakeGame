/**
 * @file point.h
 * @author Qwista
 * @date 2025
 * @version 1.0
 * @brief Fișier antet pentru structura Point din proiectul SnakeGame.
 *
 * Proiect: SnakeGame - Implementare a jocului clasic Snake în C++.
 */

#ifndef POINT_H
#define POINT_H

/**
 * @struct Point
 * @brief Reprezintă o poziție pe tabla de joc prin coordonate x și y.
 *
 * Această structură este folosită pentru a defini pozițiile șarpelui, mărului și alte elemente pe tabla de joc.
 */
struct Point {
    int x; ///< Coordonata x (orizontală).
    int y; ///< Coordonata y (verticală).

    /**
     * @brief Constructor pentru inițializarea unei poziții.
     * @param px Valoarea coordonatei x.
     * @param py Valoarea coordonatei y.
     */
    Point(int px = 0, int py = 0) : x(px), y(py) {}
};

#endif // POINT_H