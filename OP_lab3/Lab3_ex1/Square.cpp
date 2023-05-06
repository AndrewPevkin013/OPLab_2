#include "Square.h"
#include <cmath>
#include <iostream>
using namespace std;

Square::Square(double x, double y, double side, double angle) {
  this->x = x;
  this->y = y;
  this->side = side;
  this->angle = angle;
}

bool Square::operator==(const Square& s) {
  return (this->getArea() == s.getArea());
}

bool Square::operator!=(const Square& s) {
  return (this->getArea() != s.getArea());
}

bool Square::operator<(const Square& s) {
  return (this->getArea() < s.getArea());
}

bool Square::operator>(const Square& s) {
  return (this->getArea() > s.getArea());
}

Square Square::operator*(double num) {
  return Square(this->x, this->y, this->side * num, this->angle);
}

Square Square::operator+(const Square& s) {
  return Square(this->x + s.x, this->y + s.y, this->side, this->angle);
}

double Square::getArea() const {
  return pow(this->side, 2);
}

void Square::print() const {
  cout << "Square coordinates: " << this->x << ", " << this->y << endl;
  cout << "Side length: " << this->side << endl;
  cout << "Angle of rotation: " << this->angle << endl;
  cout << "Area: " << this->getArea() << endl;
}


