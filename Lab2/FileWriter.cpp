#include "FileWriter.h"
#include "File.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void FileWriter::writeFile(int &n, string newFile) {
    File f;
    ofstream fout;
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
}

