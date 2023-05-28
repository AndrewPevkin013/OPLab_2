#ifndef UNTITLED4_IPHYSOBJECT_H
#define UNTITLED4_IPHYSOBJECT_H


#include "CVector2D.h"

namespace Figures {

    class IPhysObject : public CVector2d {
    public:
        virtual double mass() = 0;
// Координаты центра масс, м.
        virtual CVector2d position() = 0;
// Сравнение по массе.
        virtual bool operator== (IPhysObject &ob) = 0;
// Сравнение по массе.
        virtual bool operator< (IPhysObject &ob) = 0;
    };

} // Figures


#endif //UNTITLED4_IPHYSOBJECT_H
