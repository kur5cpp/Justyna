#include "trojkat.h"
#include <iostream>

using namespace std;

trojkat::trojkat(float x, float y, float z)
{
cout << __FUNCTION__ << endl;
    a=x;
    b=y;
    c=z;
}

bool trojkat::czy_prostokatny()
{
cout << __FUNCTION__ << endl;
    if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
        return true;
    else
        return false;
}

float trojkat::obwod()
{
cout << __FUNCTION__ << endl;
    return a+b+c;
}

trojkat::~trojkat()
{
    cout << __FUNCTION__ << endl;
}
