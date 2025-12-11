cmake_minimum_required(VERSION 3.10)
project(SnakeGame)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(snakegame
    src/main.cpp
    src/snake.cpp
    src/apple.cpp
    src/point.cpp
    src/direction.cpp
    src/board.cpp
    src/game_engine.cpp
    src/painter.cpp
)

enable_testing()
add_subdirectory(extern/googletest)

add_executable(snake_tests
    tests/test_point.cpp
    tests/test_apple.cpp
    tests/test_snake.cpp
)
target_link_libraries(snake_tests gtest gtest_main) 

add_test(NAME SnakeTests COMMAND snake_tests)