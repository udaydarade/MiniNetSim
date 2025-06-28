#include "Ellipse.hpp"

Ellipse::Ellipse(int a, int b, Point c) : Shape(c), a(a), b(b) {}

int Ellipse::getMajorAxisLength() { return a; }
int Ellipse::getMinorAxisLength() { return b; }

double Ellipse::getArea() {
    return 3.14 * a * b;
}

void Ellipse::draw(sf::RenderWindow& window) {
    sf::CircleShape ellipse(1.f);
    ellipse.setScale(a, b);
    ellipse.setPosition(center.getX(), center.getY());
    ellipse.setFillColor(sf::Color::Yellow);
    window.draw(ellipse);
}

void Ellipse::scale(double fx, double fy) {
    a *= fx;
    b *= fy;
}

std::string Ellipse::serialize() {
    return "Ellipse at (" + std::to_string(center.getX()) + ", " + std::to_string(center.getY()) + ") a = " + std::to_string(a) + ", b = " + std::to_string(b);
}

ShapeType Ellipse::getShape() {
    return ELLIPSE;
}