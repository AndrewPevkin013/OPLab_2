#include "Radius.h"
#include <iostream>
using namespace std;


  int Circle::changeRadius(int& change_data) {
    if (radius > change_data) {
      radius = radius - change_data;
      return 0;
    }
    radius = 0;

  }
  int Circle::Print() {
    cout << radius << endl;
    return 0;
  }
