#include <iostream>
#include "FileWriter.h"
#include <fstream>
#include <string>
#include "File.h"
using namespace std;

int main() {
  File f;
  FileWriter fw;
  f.getInfo();

  int n;
  string newFile;
  cin >> n;

  if (n == 1) {
    cout << "Write file name: ";
    cin >> newFile;
    f.getInfoCreating();
    cin >> n;
    try
    {
      fw.createNewFile(n, newFile);
    }
    catch (...) {
      cout << "Something went wrong" << endl;
    }
  }

  else if (n == 2) {
    f.getInfoOpening();
    cin >> n;
    try
    {
      fw.openFile(n);
    }
    catch (...) {
      cout << "Something went wrong" << endl;
    }

  }

  else if (n == 3) {
    try
    {
      fw.showFileData();
    }
    catch (...) {
      cout << "Something went wrong" << endl;
    } 
  }

  else if (n == 4) {
    cout << "MyFile.txt" << endl;
  }
  
  return 0;
}
