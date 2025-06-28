#include "compareArea.hpp"

bool compareArea(Shape& shape1, Shape& shape2) {
    return shape1.getArea() > shape2.getArea();
}
