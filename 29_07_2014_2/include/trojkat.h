#ifndef TROJKAT_H
#define TROJKAT_H
#include <iostream>

class trojkat
{
public:
    trojkat(float a, float b, float c);
    virtual ~trojkat();
    bool czy_prostokatny();
    float obwod();
    static void fun()
    {
        std::cout << "jestem funkcja statyczna" << std::endl;
    }

private:
    float a;
    float b;
    float c;
};

#endif // TROJKAT_H
