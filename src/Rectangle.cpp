#include "Rectangle.hpp"

Rectangle::Rectangle(int l, int b, Point c) : Shape(c), length(l), breadth(b) {}

int Rectangle::getLength() { return length; }
int Rectangle::getBreadth() { return breadth; }

double Rectangle::getArea() {
    return length * breadth;
}

void Rectangle::draw(sf::RenderWindow& window) {
    sf::RectangleShape rect(sf::Vector2f(length, breadth));
    rect.setPosition(center.getX(), center.getY());
    rect.setFillColor(sf::Color::Green);
    window.draw(rect);
}

void Rectangle::scale(double fx, double fy) {
    length *= fx;
    breadth *= fy;
}

std::string Rectangle::serialize() {
    return "Rectangle at (" + std::to_string(center.getX()) + ", " + std::to_string(center.getY()) + ") length = " + std::to_string(length) + ", breadth = " + std::to_string(breadth);
}

ShapeType Rectangle::getShape() {
    return RECTANGLE;
}