#include "Canvas.hpp"
#include <SFML/Graphics.hpp>

Canvas::~Canvas() {
    for (auto s : shapes) {
        delete s;
    }
}

void Canvas::addShape(Shape* shape) {
    shapes.push_back(shape);
}

void Canvas::displayCanvas() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Canvas");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);
        for (auto shape : shapes) {
            shape->draw(window);
        }
        window.display();
    }
}
