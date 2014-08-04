#include <iostream>
#include "Punkt1D.h"
#include "Punkt2D.h"
#include "Punkt3D.h"

using namespace std;

int main()
{
    Punkt1D p1(9);
    Punkt2D p2(1, 4);
    Punkt3D p3(1,2,3);
   // p1.wyswietl_1D();
   // p2.wyswietl_2D();
    p3.wyswietl_3D();
    return 0;
}
