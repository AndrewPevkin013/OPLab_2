#include <iostream>
#include <cmath>
using namespace std;

class Square {
private:
  double x, y; //координаты левого верхнего угла
  double side; //длина стороны
  double angle; //угол поворота относительно оси OX

public:
  Square(double x, double y, double side, double angle) {
    this->x = x;
    this->y = y;
    this->side = side;
    this->angle = angle;
  }

  bool operator==(const Square& s) {
    return (this->getArea() == s.getArea());
  }

  bool operator!=(const Square& s) {
    return (this->getArea() != s.getArea());
  }

  bool operator<(const Square& s) {
    return (this->getArea() < s.getArea());
  }

  bool operator>(const Square& s) {
    return (this->getArea() > s.getArea());
  }

  Square operator*(double num) {
    return Square(this->x, this->y, this->side * num, this->angle);
  }

  Square operator+(const Square& s) {
    return Square(this->x + s.x, this->y + s.y, this->side, this->angle);
  }

  double getArea() const {
    return pow(this->side, 2);
  }

  void print() const {
    cout << "Square coordinates: (" << this->x << ", " << this->y << ")" << endl;
    cout << "Side length: " << this->side << endl;
    cout << "Angle of rotation (in degrees): " << this->angle << endl;
    cout << "Area: " << this->getArea() << endl;
  }
};

int main() {
  Square s1(0, 0, 3, 0);
  Square s2(0, 0, 2, 45);

  cout << "Square 1:" << endl;
  s1.print();
  cout << endl;

  cout << "Square 2:" << endl;
  s2.print();
  cout << endl;

  if (s1 == s2)
    cout << "Area of Square 1 is equal to area of Square 2" << endl;
  else
    cout << "Area of Square 1 is not equal to area of Square 2" << endl;

  Square s3 = s2 * 2;
  cout << "Square 3 (twice the size of Square 2):" << endl;
  s3.print();
  cout << endl;

  Square s4 = s1 + s2;
  cout << "Square 4 (result of adding Square 1 and Square 2):" << endl;
  s4.print();
  cout << endl;

  return 0;
}




















































































































//#include <iostream>
//using namespace std;
//
//const int MAX_SIZE = 100;
//
//class Stack {
//private:
//  int elements[MAX_SIZE];
//  int top_index = -1;
//public:
//
//  void push(int value) {
//    if (top_index >= MAX_SIZE - 1)
//    {
//      throw "Error: stack overflow";
//    }
//    top_index++;
//    elements[top_index] = value;
//  }
//
//  int pop() {
//    if (top_index < 0)
//    {
//      throw "Error: stack is empty";
//    }
//    int value = elements[top_index];
//    top_index--;
//    return value;
//  }
//
//  friend ostream& operator<<(ostream& os, const Stack& stack) {
//    os << "Stack: ";
//    for (int i = stack.top_index; i >= 0; i--) {
//      os << stack.elements[i] << " ";
//    }
//    return os;
//  }
//
//  friend istream& operator>>(istream& is, Stack& stack) {
//    int value;
//    is >> value;
//    stack.push(value);
//    return is;
//  }
//};
//
//int main() {
//  Stack stack;
//  cout << stack << endl;
//  stack.push(1);
//  stack.push(2);
//  stack.push(3);
//  cout << stack << endl;
//  int x = stack.pop();
//  cout << "Popped value: " << x << endl;
//  cout << stack << endl;
//  cout << "Enter a value to push into the stack: ";
//  cin >> stack;
//  cout << stack << endl;
//  return 0;
//}
