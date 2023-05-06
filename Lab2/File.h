#ifndef LAB4_FILE_H
#define LAB4_FILE_H
#include <string>

class File
{
public:

    const std::string fileWay = "C:/Users/apevk/CLionProjects/Lab4/MyFile.txt";
    std::string text;
    int num;
    float val;
    static void createNewFile(int &n, std::string newFile);
    static void openFile(int& n);

};

#endif //LAB4_FILE_H
