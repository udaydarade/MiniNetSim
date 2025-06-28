#pragma once

#include "Shape.hpp"

class Ellipse : public Shape {
protected:
    int a, b;
public:
    Ellipse(int a, int b, Point c);
    int getMajorAxisLength();
    int getMinorAxisLength();
    double getArea() override;
    void draw(sf::RenderWindow& window) override;
    void scale(double fx, double fy) override;
    std::string serialize() override;
    ShapeType getShape() override;
};