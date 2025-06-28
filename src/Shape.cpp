#include "Shape.hpp"

Shape::Shape(Point c){
    this->center = c;
}

ShapeType Shape::getShape(){
    return RECTANGLE;
}

double Shape::getArea(){
    return -1;
}

void Shape::draw(sf::RenderWindow& window){}

void Shape::move(int dx, int dy) {
    center.move(dx, dy);
}

void Shape::scale(double fx, double fy) {}

std::string Shape::serialize() {
    return "Shape at (" + std::to_string(center.getX()) + ", " + std::to_string(center.getY()) + ")";
}