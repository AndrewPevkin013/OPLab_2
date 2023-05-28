#include <iostream>
#include "Square.h"
using namespace std;


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
    cout << "Area of Square 1 == area of Square 2" << endl;
  else
    cout << "Area of Square 1 != area of Square 2" << endl;

  Square s3 = s2 * 2;
  cout << "Square 3 (Square 2 * 2):" << endl;
  s3.print();
  cout << endl;

  Square s4 = s1 + s2;
  cout << "Square 4 (Square 1 + Square 2):" << endl;
  s4.print();
  cout << endl;

  return 0;
}
