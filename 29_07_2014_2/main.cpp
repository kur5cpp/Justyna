#include <iostream>
#include "trojkat.h"

using namespace std;

int main()
{
    trojkat::fun();
    trojkat* jeden = new trojkat(1.1, 2.1, 5.8);
    trojkat dwa(3.0, 4.0, 5.0);
    trojkat trzy(5.5, 5.9, 10.5);

    cout.width(20);
    cout  << "jeden czy_prost: "  << boolalpha << jeden->czy_prostokatny() << endl;
    cout.width(20);
    cout << "dwa czy_prost: "  <<boolalpha << dwa.czy_prostokatny() << endl;
    cout.width(20);
    cout << "trzy czy_prost: "  <<boolalpha << trzy.czy_prostokatny() << endl;

    cout.width(20);
    float obwod = jeden->obwod();
    cout << endl << "jeden obwod: "  << obwod << endl;
    cout.width(20);
    obwod = dwa.obwod();
    cout << "dwa obwod: "  <<obwod << endl;
    cout.width(20);
    obwod = trzy.obwod();
    cout << "trzy obwod: "  <<obwod << endl;

    delete jeden;


    return 0;
}
