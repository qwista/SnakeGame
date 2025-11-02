#pragma once

#include "apple.hpp"
#include "direction.hpp"
#include "point.hpp"
#include <vector>

class Snake {
   std::vector<Point> _segments;
public:
   Snake();
   Snake(const Point& position);
   void Move(Direction direction);
   size_t GetSize() const;
   Point GetPosition() const;
   void Eat(const Apple& apple);
};