#include <iostream>
#include "Sum.h"
#include "Radius.h"
#include "Rev.h"
#include "Matrix.h"
using namespace std;

int main()
{

  //Задание 1
  int a = 20, b = 3;
  cout << a << " % " << b << endl;
  Sum(a, b);
  cout << a << endl;
  a = 20, b = 7;
  cout << a << " % " << b << endl;
  Sum(&a, &b);
  cout << a << endl;
  cout << '\n';

  // Задание 2
  float p = 3.14;
  Rev(p);
  cout << p << endl;
  p = 3.14;
  Rev(&p);
  cout << p << endl;
  cout << '\n';

  //Задание 3

  int new_len;
  Circle* c = new Circle();
  c->radius = 10;
  c->Print();
  cin >> new_len;
  c->changeRadius(new_len);
  c->Print();
  cout << '\n';

  //Задание 4
  int const row = 3, col = 3;
  int mtrx[row][col], first = 1, second = 2;
  cout << "Matrix 3x3" << endl;
  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++)
      mtrx[i][j] = rand() % 10;
  }
  
  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++)
      cout << mtrx[i][j] << ' ';
    cout << endl;
  }

  cout << '\n';
  Matrix(mtrx, first, second);

  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++)
      cout << mtrx[i][j] << ' ';
    cout << endl;
  }

  // ====================================================================

  cout << '\n';
  int mtrx2[row][col], f = 1, s = 2;
  cout << "matrix 3x3" << endl;
  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++)
      mtrx2[i][j] = rand() % 10;
  }

  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++)
      cout << mtrx2[i][j] << ' ';
    cout << endl;
  }
  cout << '\n';

  Matrix(&mtrx2, &f, &s);

  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++)
      cout << mtrx2[i][j] << ' ';
    cout << endl;
  }

  return 0;
}
