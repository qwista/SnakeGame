#include "painter.hpp"
#include <iostream>

void Painter::DrawImage(Point topLeft, Point bottomRight, std::vector<std::string>& image) {
    std::cout << "Drawing image from (" << topLeft.x << "," << topLeft.y 
              << ") to (" << bottomRight.x << "," << bottomRight.y << ")\n";
}

void Painter::WriteText(Point position, const std::string& text) {
    std::cout << "Text \"" << text << "\" at (" << position.x << "," << position.y << ")\n";
}