#pragma once

#include "Point.hpp"
#include "ShapeType.hpp"
#include <SFML/Graphics.hpp>
#include <string>

class Shape {
protected:
    Point center;
public:
    Shape(Point c);
    virtual ~Shape() {}

    virtual ShapeType getShape();
    virtual double getArea();

    virtual void draw(sf::RenderWindow& window);
    virtual void move(int dx, int dy);
    virtual void scale(double fx, double fy);
    
    virtual std::string serialize();
};