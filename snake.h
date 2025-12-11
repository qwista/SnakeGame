/**
 * @file snake.h
 * @author Qwista
 * @date 2025
 * @version 1.0
 * @brief Fișier antet pentru clasa Snake din proiectul SnakeGame.
 *
 * Proiect: SnakeGame - Implementare a jocului clasic Snake în C++.
 */

#ifndef SNAKE_H
#define SNAKE_H

#include <vector>
#include "point.h"
#include "direction.h"

/**
 * @class Snake
 * @brief Reprezintă șarpele din joc, format dintr-un șir de segmente.
 *
 * Gestionază mișcarea, creșterea și coliziunile șarpelui.
 */
class Snake {
private:
    std::vector<Point> body; ///< Corpul șarpelui ca vector de poziții.
    Direction direction;     ///< Direcția curentă de deplasare.

public:
    /**
     * @brief Constructor pentru inițializarea șarpelui la o poziție inițială.
     * @param startPos Poziția de start.
     * @param dir Direcția inițială.
     */
    Snake(const Point& startPos, Direction dir);

    /**
     * @brief Mișcă șarpele în direcția curentă.
     */
    void move();

    /**
     * @brief Crește lungimea șarpelui după consumarea unui măr.
     */
    void grow();

    /**
     * @brief Schimbă direcția șarpelui.
     * @param newDir Noua direcție.
     */
    void changeDirection(Direction newDir);

    /**
     * @brief Verifică dacă șarpele s-a ciocnit de propriul corp.
     * @return True dacă există coliziune.
     */
    bool selfCollision() const;

    // Alte metode similare...
};

#endif // SNAKE_H