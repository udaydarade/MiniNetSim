#include "Circle.hpp"

Circle::Circle(int radius, Point c) : Ellipse(radius, radius, c) {}

int Circle::getDiameter() {
    return 2 * getMajorAxisLength();
}

ShapeType Circle::getShape() {
    return CIRCLE;
}

std::string Circle::serialize() {
    return "Circle at (" + std::to_string(center.getX()) + ", " + std::to_string(center.getY()) + ") radius = " + std::to_string(getMajorAxisLength());
}
