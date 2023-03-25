#pragma once
#include <string>
class File
{
public:

  std::string fileWay = "C:/Users/apevk/source/repos/Lab_2/MyFile.txt";
  std::string text;

  int num;
  float val;

  void getInfo();
  void getInfoCreating();
  void getInfoOpening();
};

