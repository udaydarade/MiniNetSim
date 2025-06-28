#pragma once

#include "Shape.hpp"

class RegularPolygon : public Shape {
protected:
    int numberOfSides, sideLength;
public:
    RegularPolygon(int sides, int len, Point c);
    int getSides();
    int getSideLength();
    double getArea() override;
    void draw(sf::RenderWindow& window) override;
    void scale(double fx, double fy) override;
    std::string serialize() override;
    ShapeType getShape() override;
};