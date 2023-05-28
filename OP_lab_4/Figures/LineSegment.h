#ifndef UNTITLED4_LINESEGMENT_H
#define UNTITLED4_LINESEGMENT_H

#include "iostream"
#include "Figure.h"
#include "IPhysObject.h"
#include "IPrintable.h"
namespace Figures {

    class LineSegment : virtual Figure, virtual IPhysObject, virtual IPrintable {
    private:
        int x1, y1, x2, y2;
        CVector2d _position;

    public:
        LineSegment(int x1, int y1, int x2, int y2);
        double square() override;
        double perimetr() override;
        double mass() override;
        CVector2d position() override;
        bool operator== ( IPhysObject &ob ) override;
        bool operator< ( IPhysObject &ob ) override;
        void draw() override;
    };

}
#endif //UNTITLED4_LINESEGMENT_H
