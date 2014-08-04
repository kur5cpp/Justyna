#include "Zespol.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

void Zespol::wyswietl()
{
    cout.precision(2);
    cout << fixed << showpoint << r << "+" << u << "i" << endl;
}

Zespol::Zespol()
{
    r = (rand()%2001-1000)/100.00;
    u = (rand()%2001-1000)/100.00;
}

Zespol::Zespol(int a, int b)
{
    r = a;
    u = b;
}

Zespol::~Zespol()
{

}
