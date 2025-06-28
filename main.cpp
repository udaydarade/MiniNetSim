#include "Canvas.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Ellipse.hpp"
#include "Circle.hpp"
#include "RegularPolygon.hpp"

int main() {
    Canvas canvas;

    canvas.addShape(new Rectangle(100, 50, Point(100, 100)));
    canvas.addShape(new Square(60, Point(300, 100)));
    canvas.addShape(new Ellipse(40, 20, Point(500, 100)));
    canvas.addShape(new Circle(30, Point(100, 300)));
    canvas.addShape(new RegularPolygon(6, 50, Point(300, 300)));

    canvas.displayCanvas();

    return 0;
}
