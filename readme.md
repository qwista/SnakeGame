1. Denumire: SnakeGame
2. Jocul clasic "Snake", implementat in C++, utilizand o structura modulara cu clase si fisiere header.
3. Reguli: 

-Sarpele se deplaseaza pe o tabla dreptunghiulara
-Pe tabla apare un mar pe care sarpele trebuie sa il manance
-De fiecare data cand mananca un mar, sarpele creste in lungime
-Jocul se termină daca sarpele se loveste de marginea tablei sau de propriul corp

4\. Tipuri de date declarate

-struct Point

Reprezinta o pozitie pe tabla prin coordonatele x si y

-class Apple

Reprezinta un mar plasat pe tabla, are o pozitie de tip Point

-enum class Direction
Reprezinta directia de deplasare a sarpelui

-class snake

Reprezinta sarpele din joc, format dintr-un sir de segmente de tip Point

-class Board 
Reprezinta tabla de joc, are dimensiuni (lungime si latime)

-class GameEngine
Reprezinta motorul jocului, gestioneaza sarpele, merele, tabla si logica jocului

-class Painter

Reprezinta componenta care va desena elementele jocului pe ecran si va afisa text 




