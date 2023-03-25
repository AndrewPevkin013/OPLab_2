#include "File.h"
#include <iostream>
using namespace std;

void File::getInfo() {
  cout << "Choose one: " << endl;
  cout << "\"1\" - create new file; " << endl;
  cout << "\"2\" - open file; " << endl;
  cout << "\"3\" - Show file data; " << endl;
  cout << "\"4\" - Show file name; " << endl;
}

void File::getInfoCreating() {

  cout << "Choose one: " << endl;
  cout << "\"1\" - write a text; " << endl;
  cout << "\"2\" - write integer numbers; " << endl;
  cout << "\"3\" - write floating point numbers; " << endl;
}

void File::getInfoOpening() {

  cout << "Choose one: " << endl;
  cout << "\"1\" - write a text; " << endl;
  cout << "\"2\" - write integer numbers; " << endl;
  cout << "\"3\" - write floating point numbers; " << endl;
}
