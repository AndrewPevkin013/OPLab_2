#include "FigureSystem.h"


namespace Figures {
    FigureSystem::FigureSystem() = default;

    void FigureSystem::addLineSegment(int x1, int y1, int x2, int y2) {
        FigureSystem::lineSegm.emplace_back(x1, y1, x2, y2);
    }

    void FigureSystem::addTrapezium(int height, int bottomLength, int topLength) {
        FigureSystem::trapezium.emplace_back(height, bottomLength, topLength);
    }

    void FigureSystem::PrintLine() {
        for (int i = 0; i < lineSegm.size(); ++i) {
            lineSegm[i].draw();
        }
    }

    void FigureSystem::PrintTrapezium() {
        for (int i = 0; i < trapezium.size(); ++i) {
            trapezium[i].draw();
        }
    }

    int FigureSystem::SquareLine() {
        int summ = 0;
        for (int i = 0; i < lineSegm.size(); ++i) {
            summ += lineSegm[i].square();
        }
        return summ;
    }


    int FigureSystem::SquareTrapezium() {
        int summ = 0;
        for (int i = 0; i < trapezium.size(); ++i) {
            summ += trapezium[i].square();
        }
        return summ;
    }

    int FigureSystem::PerimetrLine() {
        int summ = 0;
        for (int i = 0; i < lineSegm.size(); ++i) {
            summ += lineSegm[i].perimetr();
        }
        return summ;
    }

    int FigureSystem::PerimetrTrapezium() {
        int summ = 0;
        for (int i = 0; i < trapezium.size(); ++i) {
            summ += trapezium[i].perimetr();
        }
        return summ;
    }

    int FigureSystem::Cmass() {
        int summ;
        for (int i = 0; i < lineSegm.size(); ++i) {
            summ += lineSegm[i].mass();
        }

        for (int i = 0; i < trapezium.size(); ++i) {
            summ += trapezium[i].mass();
        }
        return 0;
    }

    int FigureSystem::SizeOfSystem() {
        return sizeof(trapezium) + sizeof(lineSegm);
    }

    bool FigureSystem::FigureSort(int a, int b) {
        return a > b;
    }


}
