#include "FileWriter.h"
#include "File.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void FileWriter::createNewFile(int& n, string newFile) {
  File f;

  ofstream fout;
  fout.open(newFile);
  if (!fout.is_open())
  {
    throw exception("Something went wrong");
  }
  cout << "File created" << endl;
  switch (n) {
  case 1:
    cin >> f.text;
    fout << f.text << endl;
    break;

  case 2:
    cin >> f.num;
    fout << f.num << endl;
    break;

  case 3:
    cin >> f.val;
    fout << f.val << endl;
    break;
  case 4:
    cout << newFile << endl;
    break;
  }
  fout.close();
}

void FileWriter::openFile(int& n) {
  File f;
  ofstream fout;
  fout.open(f.fileWay, ifstream::app);
  if (!fout.is_open())
  {
    throw exception("Something went wrong");
  }
  cout << "File opened" << endl;
  switch (n) {
  case 1:
    cin >> f.text;
    fout << f.text << endl;
    break;
  case 2:
    cin >> f.num;
    fout << f.num << endl;
    break;
  case 3:
    cin >> f.val;
    fout << f.val << endl;
    break;
  }
  fout.close();

}

void FileWriter::showFileData() {
  File f;
  ifstream fin;
  fin.open(f.fileWay);
  if (!fin.is_open())
  {
    throw exception();
  }
  cout << "File open..." << endl;
  char ch;
  while (fin.get(ch)) {
    cout << ch;
  }
    
  fin.close();
}

