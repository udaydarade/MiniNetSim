#include "Square.hpp"

Square::Square(int side, Point c) : Rectangle(side, side, c) {}

int Square::getSide() {
    return getLength();
}

ShapeType Square::getShape() {
    return SQUARE;
}

std::string Square::serialize() {
    return "Square at (" + std::to_string(center.getX()) + ", " + std::to_string(center.getY()) + ") side = " + std::to_string(getSide());
}