#pragma once

#include "Shape.hpp"

class Rectangle : public Shape {
protected:
    int length;
    int breadth;
public:
    Rectangle(int l, int b, Point c);
    int getLength();
    int getBreadth();
    double getArea() override;
    void draw(sf::RenderWindow& window) override;
    void scale(double fx, double fy) override;
    std::string serialize() override;
    ShapeType getShape() override;
};