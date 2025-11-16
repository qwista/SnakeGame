#include "game_engine.hpp"
#include "sqlite3.h"

int main() {
    GameEngine engine;
    engine.Init();
    engine.Run();
    return 0;
}

void SaveScore(int score) {
    sqlite3* db;
    sqlite3_open("scores.db", &db);
    sqlite3_exec(db,
        "CREATE TABLE IF NOT EXISTS scores(name TEXT, score INT);",
        nullptr, nullptr, nullptr);
    sqlite3_exec(db,
        "INSERT INTO scores VALUES('player', 123);", 
        nullptr, nullptr, nullptr);
    sqlite3_close(db);
}