#ifndef UNTITLED4_TRAPEZIUM_H
#define UNTITLED4_TRAPEZIUM_H

#include "iostream"
#include "Figure.h"
#include "IPhysObject.h"
#include "IPrintable.h"
namespace Figures {

    class Trapezium : virtual Figure, virtual IPhysObject, virtual IPrintable {
    private:
        CVector2d _position;
        int height, bottomLength, topLength;

    public:
        Trapezium(int height, int bottomLength, int topLength);

        double square() override;
        double perimetr() override;

        double mass() override;
        CVector2d position() override;
        bool operator== ( IPhysObject &ob ) override;
        bool operator< ( IPhysObject &ob ) override;

        void draw() override;
    };

}
#endif //UNTITLED4_TRAPEZIUM_H
