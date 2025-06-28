#include "RegularPolygon.hpp"
#include <cmath>

RegularPolygon::RegularPolygon(int sides, int len, Point c) : Shape(c), numberOfSides(sides), sideLength(len) {}

int RegularPolygon::getSides() { return numberOfSides; }
int RegularPolygon::getSideLength() { return sideLength; }

double RegularPolygon::getArea() {
    return (numberOfSides * sideLength * sideLength) / (4 * tan(3.14 / numberOfSides));
}

void RegularPolygon::draw(sf::RenderWindow& window) {
    sf::CircleShape polygon(sideLength, numberOfSides);
    polygon.setPosition(center.getX(), center.getY());
    polygon.setFillColor(sf::Color::Blue);
    window.draw(polygon);
}

void RegularPolygon::scale(double fx, double fy) {
    sideLength *= fx;
}

std::string RegularPolygon::serialize() {
    return "RegularPolygon at (" + std::to_string(center.getX()) + ", " + std::to_string(center.getY()) + ") sides = " + std::to_string(numberOfSides) + ", side length = " + std::to_string(sideLength);
}

ShapeType RegularPolygon::getShape() {
    return REGULAR_POLYGON;
}
