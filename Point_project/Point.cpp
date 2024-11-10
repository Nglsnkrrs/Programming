#include "Point.h"

void Point::setX(double value) { this->x = value; }
void Point::setY(double value) { this->y = value; }

double Point::getX() const { return this->x; }
double Point::getY() const { return this->y; }

void Point::display() const { std::cout << "(" << x << "," << y << ")"; }
void Point::write() { std::cin >> this->x; std::cin >> this->y; }



