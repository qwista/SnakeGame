# SnakeGame

## Descrierea proiectului
Jocul clasic "Snake", implementat în C++, utilizând o structură modulară cu clase și fișiere header. Proiectul este dezvoltat în cadrul laboratoarelor de programare, cu accent pe OOP, documentație și testare.

## Descrierea regulilor jocului
- Șarpele se deplasează pe o tablă dreptunghiulară.
- Pe tablă apare un măr pe care șarpele trebuie să îl mănânce.
- De fiecare dată când mănâncă un măr, șarpele crește în lungime.
- Jocul se termină dacă șarpele se lovește de marginea tablei sau de propriul corp.

## Tipuri de date declarate
- **struct Point**: Reprezintă o poziție pe tablă prin coordonatele x și y.
- **class Apple**: Reprezintă un măr plasat pe tablă, are o poziție de tip Point.
- **enum class Direction**: Reprezintă direcția de deplasare a șarpelui (UP, DOWN, LEFT, RIGHT).
- **class Snake**: Reprezintă șarpele din joc, format dintr-un șir de segmente de tip Point.
- **class Board**: Reprezintă tabla de joc, are dimensiuni (lungime și lățime).
- **class GameEngine**: Reprezintă motorul jocului, gestionează șarpele, merele, tabla și logica jocului.
- **class Painter**: Reprezintă componenta care desenează elementele jocului pe ecran și afișează text.

## Specificarea dependențelor proiectului
- **Mediu de dezvoltare**: Visual Studio Code, CLion sau orice IDE compatibil cu C++.
- **Compilator**: GCC sau Clang (C++11 sau superior).
- **Biblioteci terțe**: 
  - `<vector>`, `<iostream>` (standard C++).
  - Google Test (gtest) pentru testare unitară – descarcă din https://github.com/google/googletest (versiune 1.14 sau superioară).
- **Sistem de operare**: Compatibil cu Windows, Linux sau macOS.

## Descrierea modului de construire a aplicației
1. Instalează dependențele (ex: gtest via submodule sau manual).
2. Rulează CMake pentru a genera fișierele de build: