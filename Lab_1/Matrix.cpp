#include "Matrix.h"

void Matrix(int(& mtrx)[3][3], int& first, int& second)
{
  int tmp;
  for (int i = 0; i < 3; i++) {
    tmp = mtrx[first - 1][i];
    mtrx[first - 1][i] = mtrx[second - 1][i];
    mtrx[second - 1][i] = tmp;
  }
}

void Matrix(int(*mtrx)[3][3], int* f, int* s)
{
  int tmp;
  for (int i = 0; i < 3; i++) {
    tmp = (*mtrx)[(*f) - 1][i];
    (*mtrx)[(*f) - 1][i] = (*mtrx)[(*s) - 1][i];
    (*mtrx)[(*s) - 1][i] = tmp;
  }
}
