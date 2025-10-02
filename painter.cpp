#include "painter.hpp"
#include <iostream>

void Painter::DrawImage(Point topLeft, Point bottomRight, char** image) {
    
    std::cout << "Drawing image from (" << topLeft.x << "," << topLeft.y 
              << ") to (" << bottomRight.x << "," << bottomRight.y << ")\n";
}

void Painter::WriteText(Point position, char* text) {
    std::cout << "Text \"" << text << "\" at (" << position.x << "," << position.y << ")\n";
}
