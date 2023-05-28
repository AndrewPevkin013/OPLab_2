#include "LineSegment.h"
#include "cmath"

namespace Figures {

    LineSegment::LineSegment(int x1, int y1, int x2, int y2)
    {
        this->_position.x = x2 - x1;
        this->_position.y = y2 - y1;
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    }

    double LineSegment::square() {
        double downSide = (LineSegment::x2 - LineSegment::x1) * (LineSegment::x2 - LineSegment::x1);
        double lateralSide = (LineSegment::y2 - LineSegment::y1) * (LineSegment::y2 - LineSegment::y1);
        return sqrt(downSide + lateralSide);
    }

    double LineSegment::perimetr() {
        double downSide = (LineSegment::x2 - LineSegment::x1) * (LineSegment::x2 - LineSegment::x1);
        double lateralSide = (LineSegment::y2 - LineSegment::y1) * (LineSegment::y2 - LineSegment::y1);
        return sqrt(downSide + lateralSide);
    }

    CVector2d LineSegment::position() {
        return _position;
    }

    bool LineSegment::operator==(IPhysObject &ob) {
        return this->mass() == ob.mass();
    }

    bool LineSegment::operator<(IPhysObject &ob) {
        return this->mass() < ob.mass();
    }


    void LineSegment::draw() {
        std::cout << "~This is Line segment!~" << std::endl;
    }

double LineSegment::mass() {
    return 0;
}

}
