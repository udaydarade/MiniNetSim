#pragma once

#include "Ellipse.hpp"

class Circle : public Ellipse {
public:
    Circle(int radius, Point c);
    int getDiameter();
    ShapeType getShape() override;
    std::string serialize() override;
};