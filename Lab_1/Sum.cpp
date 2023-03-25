#include "Sum.h"

void Sum(int &a, int &b){
  if (a > b) {
    a = a % b;

    return;
  }

  a = b % a;
}

void Sum(int* pa, int* pb) {
  if ((*pa) > (*pb)) {
    (*pa) = (*pa) % (*pb);
  } else
    (*pa) = (*pb) % (*pa);
}
