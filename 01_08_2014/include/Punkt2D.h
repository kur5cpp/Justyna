#ifndef PUNKT2D_H
#define PUNKT2D_H
#include <iostream>
#include "Punkt1D.h"

class Punkt2D : public Punkt1D
{
    public:
        int y;
        Punkt2D();
        Punkt2D(int a, int b): Punkt1D(a) {y = b;} // a wysylasz zeby kostruktor Punkt1D sie nim zajac i go stworzyl
        virtual ~Punkt2D();
        void wyswietl_2D()
        {
            wyswietl_1D();
            std::cout << std::endl << "Punkt2D: " << x << ", " << y;
        }
    protected:
    private:
};

#endif // PUNKT2D_H
