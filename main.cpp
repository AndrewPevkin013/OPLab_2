#include <iostream>
#include "Figures/FigureSystem.h"

using namespace Figures;

int main() {
    FigureSystem fs;
    std::cout << "Hello, World!" << std::endl;
    fs.addTrapezium(6, 10, 20);
    fs.PrintTrapezium();
    fs.addLineSegment(1, 1, 4, 3);
    fs.PrintLine();
    return 0;
}
