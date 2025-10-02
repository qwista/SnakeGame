# SnakeGame

## 1. Denumire
SnakeGame

## 2. Descriere
Jocul clasic "Snake", implementat în C++, utilizând o structură modulară cu clase și fișiere header.

## 3. Reguli
- Sarpele se deplasează pe o tablă dreptunghiulară.  
- Pe tablă apare un măr pe care sarpele trebuie să-l mănânce.  
- De fiecare dată când mănâncă un măr, sarpele crește în lungime.  
- Jocul se termină dacă sarpele se lovește de marginea tablei sau de propriul corp.

## 4. Tipuri de date și clase
- **struct Point** – Reprezintă o poziție pe tablă prin coordonatele x și y.  
- **class Apple** – Reprezintă un măr plasat pe tablă, are o poziție de tip Point.  
- **enum class Direction** – Reprezintă direcția de deplasare a șarpelui.  
- **class Snake** – Reprezintă șarpele din joc, format dintr-un șir de segmente de tip Point.  
- **class Board** – Reprezintă tabla de joc, are dimensiuni (lungime și lățime).  
- **class GameEngine** – Reprezintă motorul jocului, gestionează șarpele, merele, tabla și logica jocului.  
- **class Painter** – Reprezintă componenta care desenează elementele jocului pe ecran și afișează text.

## 5. Construirea proiectului

### 5.1 Compilare
Deschide terminalul în folderul proiectului și rulează:

```bash
mingw32-make
```

Aceasta va compila toate fișierele `.cpp` și va genera executabilul `Snake.exe`.

### 5.2 Curățare
Pentru a șterge fișierele obiect și executabilul generate:

```bash
mingw32-make clean
```

### 5.3 Rulare
După compilare, rulează jocul cu:

```bash
Snake.exe
```

sau din terminal:

```bash
./Snake.exe
```






