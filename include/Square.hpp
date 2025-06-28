#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle {
public:
    Square(int side, Point c);
    int getSide();
    ShapeType getShape() override;
    std::string serialize() override;
};
