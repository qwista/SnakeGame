all: SnakeGame

SnakeGame: game_engine.o main.o libgamedata.a sqlite3.o
	g++ -o Snake.exe game_engine.o main.o libgamedata.a sqlite3.o

libgamedata.a: point.o board.o apple.o snake.o
	ar rcs libgamedata.a point.o board.o apple.o snake.o

point.o:
	g++ -c point.cpp -o point.o

board.o:
	g++ -c board.cpp -o board.o

apple.o:
	g++ -c apple.cpp -o apple.o

snake.o:
	g++ -c snake.cpp -o snake.o

sqlite3.o:
	gcc -c sqlite3.c -o sqlite3.o

game_engine.o:
	g++ -c game_engine.cpp -o game_engine.o

main.o:
	g++ -c main.cpp -o main.o

clean:
	del /Q *.o *.a *.exe