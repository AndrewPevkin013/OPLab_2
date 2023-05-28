#include "Trapezium.h"
#include "cmath"

namespace Figures {
    Trapezium::Trapezium(int height, int bottomLength, int topLength)
    {

        this->height = height;
        this->bottomLength = bottomLength;
        this->topLength = topLength;

    }

    double Trapezium::square() {
        return 0.5 * (Trapezium::height * (Trapezium::bottomLength * Trapezium::topLength));
    }

    double Trapezium::perimetr() {
        double side = sqrt((Trapezium::bottomLength - Trapezium::height) / 2
                * (Trapezium::bottomLength - Trapezium::height) / 2
                + Trapezium::height * Trapezium::height);

        return Trapezium::bottomLength + Trapezium::height + 2 * side;
    }

    double Trapezium::mass() {

        return (this->topLength + this->bottomLength) * this->height / 2;
    }

    CVector2d Trapezium::position() {
        return _position;
    }

    bool Trapezium::operator==(IPhysObject &ob) {
        return this->mass() == ob.mass();
    }

    bool Trapezium::operator<(IPhysObject &ob) {
        return this->mass() < ob.mass();
    }

    void Trapezium::draw() {
        std::cout << "~This is Trapezium!~" << std::endl;
    }

}