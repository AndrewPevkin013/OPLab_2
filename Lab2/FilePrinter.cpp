#include "FilePrinter.h"
#include <string>
#include "File.h"
#include <iostream>
#include <fstream>
using namespace std;

void FilePrinter::print() {
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