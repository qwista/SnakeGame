/**
 * @file direction.h
 * @author Qwista
 * @date 2025
 * @version 1.0
 * @brief Fișier antet pentru enumerarea Direction din proiectul SnakeGame.
 *
 * Proiect: SnakeGame - Implementare a jocului clasic Snake în C++.
 */

#ifndef DIRECTION_H
#define DIRECTION_H

/**
 * @enum Direction
 * @brief Reprezintă direcțiile posibile de deplasare a șarpelui.
 *
 * Folosit pentru a controla mișcarea șarpelui pe tablă.
 */
enum class Direction {
    UP,    ///< Direcție în sus.
    DOWN,  ///< Direcție în jos.
    LEFT,  ///< Direcție la stânga.
    RIGHT  ///< Direcție la dreapta.
};

#endif // DIRECTION_H