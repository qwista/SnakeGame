#include "snake.hpp"
#include <algorithm> 

Snake::Snake() : _segments{{0, 0}} {}

Snake::Snake(const Point& position) : _segments{position} {}

void Snake::Move(Direction direction) {
   
    for (size_t i = _segments.size() - 1; i > 0; --i) {
        _segments[i] = _segments[i - 1];
    }

   
    Point& head = _segments[0];
    switch (direction) {
        case Direction::Top:    head.y -= 1; break;
        case Direction::Bottom: head.y += 1; break;
        case Direction::Left:   head.x -= 1; break;
        case Direction::Right:  head.x += 1; break;
    }
}

size_t Snake::GetSize() const {
    return _segments.size();
}

Point Snake::GetPosition() const {
    return _segments.empty() ? Point(0, 0) : _segments[0];
}

void Snake::Eat(const Apple& apple) {
    if (!_segments.empty()) {
        _segments.push_back(_segments.back()); 
    }
}