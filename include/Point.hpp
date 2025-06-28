#pragma once

class Point {
    int x, y;
public:
    Point(int x = 0, int y = 0);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    void move(int dx, int dy);
};