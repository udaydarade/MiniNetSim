#include "Point.hpp"

Point::Point(int x, int y){
    this->x = x;
    this->y = y;
}
int Point::getX(void){
    return x;
}
int Point::getY(void){
    return y;
}
void Point::setX(int val){
    this->x = val;
}
void Point::setY(int val){
    this->y = val;
}
void Point::move(int dx, int dy){
    x = x + dx;
    y = y + dy;
}   
