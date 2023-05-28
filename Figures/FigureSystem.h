#ifndef UNTITLED4_FIGURESYSTEM_H
#define UNTITLED4_FIGURESYSTEM_H


#include "vector"
#include "algorithm"
#include "LineSegment.h"
#include "Trapezium.h"

namespace Figures {

    class FigureSystem {
    private:
        std::vector<LineSegment> lineSegm;
        std::vector<Trapezium> trapezium;
    public:
        FigureSystem();
        void addLineSegment(int x1, int y1, int x2, int y2);
        void addTrapezium(int height, int bottomLength, int topLength);

        void PrintLine();
        void PrintTrapezium();

        int SquareLine();
        int SquareTrapezium();

        int PerimetrLine();
        int PerimetrTrapezium();

        int Cmass();

        int SizeOfSystem();

        bool FigureSort(int a, int b);
    };

}


#endif //UNTITLED4_FIGURESYSTEM_H
