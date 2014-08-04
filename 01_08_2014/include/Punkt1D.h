#ifndef PUNKT1D_H
#define PUNKT1D_H
#include <iostream>


class Punkt1D
{
public:
    int x;
    Punkt1D();
    Punkt1D(int a)
    {
        x = a;
    }
    void wyswietl_1D()
    {
        std::cout << std::endl << "Punkt1D: " << x;
    }
    virtual ~Punkt1D();
protected:
private:
};

#endif // PUNKT1D_H
