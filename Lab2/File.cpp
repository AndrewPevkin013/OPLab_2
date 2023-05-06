#include "File.h"
#include "FileWriter.h"
#include <string>
#include <iostream>
#include <fstream>

void File::createNewFile(int& n, string newFile) {
    File f;
    FileWriter fw;
    ofstream fout;
    fout.open(newFile);
    if (!fout.is_open())
    {
        throw exception();
    }
    cout << "File created" << endl;
    fw.writeFile(n, newFile);
    fout.close();
}

void File::openFile(int& n) {
    File f;
    FileWriter fw;
    ofstream fout;
    fout.open(f.fileWay, ifstream::app);
    if (!fout.is_open())
    {
        throw exception();
    }
    cout << "File opened" << endl;
    fw.writeFile(n, f.fileWay);
    fout.close();

}


