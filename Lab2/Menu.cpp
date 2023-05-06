#include "Menu.h"
#include "FileInfo.h"
#include "FilePrinter.h"
#include <iostream>
#include "FileWriter.h"
#include <string>
#include "File.h"

void Menu::menu() {
    File f;
    FileInfo inf;
    FilePrinter pr;
    FileWriter fw;
    inf.getStartInfo();

    int n;
    string newFile;
    cin >> n;

    if (n == 1) {
        cout << "Write file name: ";
        cin >> newFile;
        inf.getCommonInfo();
        cin >> n;
        try
        {
            f.createNewFile(n, newFile);
        }
        catch (...) {
            cout << "Something went wrong" << endl;
        }
    }

    else if (n == 2) {
        inf.getCommonInfo();
        cin >> n;
        try
        {
            f.openFile(n);
        }
        catch (...) {
            cout << "Something went wrong" << endl;
        }

    }

    else if (n == 3) {
        try
        {
            pr.print();
        }
        catch (...) {
            cout << "Something went wrong" << endl;
        }
    }

    else if (n == 4) {
        cout << "MyFile.txt" << endl;
    }

};
