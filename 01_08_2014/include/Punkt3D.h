#ifndef PUNKT3D_H
#define PUNKT3D_H
#include <iostream>
#include "Punkt2D.h"


class Punkt3D : public Punkt2D
{
    public:
    int z;
        Punkt3D(int a, int b, int c): Punkt2D(a, b) {z = c;}
        virtual ~Punkt3D();
        void wyswietl_3D()
        {
            std::cout << std::endl << "Punkt3D: " << x << ", " << y << ", " << z;
        }
        Punkt3D();

    protected:
    private:
};

#endif // PUNKT3D_H
