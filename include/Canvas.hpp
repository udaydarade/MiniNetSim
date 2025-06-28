#pragma once

#include <vector>
#include "Shape.hpp"

class Canvas {
private:
    std::vector<Shape*> shapes;

public:
    ~Canvas();
    void addShape(Shape* shape);
    void displayCanvas();
};
