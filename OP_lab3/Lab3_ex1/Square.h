#pragma once

class Square {
private:
  double x, y;
  double side;
  double angle; //угол поворота относительно оси OX

public:
  Square(double x, double y, double side, double angle);

  bool operator==(const Square& s);
  bool operator!=(const Square& s);
  bool operator<(const Square& s);
  bool operator>(const Square& s);
  Square operator*(double num);
  Square operator+(const Square& s);

  double getArea() const;

  void print() const;

};

