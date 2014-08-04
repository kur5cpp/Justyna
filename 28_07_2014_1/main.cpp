#include <iostream>
#include <string>
#include "Ulamek.hpp"

using namespace std;



int main()
{
    Ulamek pierwszy;
    pierwszy.licznik = 4;
    pierwszy.mianownik = 3;

    Ulamek drugi;
    drugi.licznik = 6;
    drugi.mianownik = 7;

    Ulamek suma;
    suma.dodaj(pierwszy, drugi);
    suma.wyswietl();

    pierwszy.mnoz(10);
    pierwszy.wyswietl();

    pierwszy.zwieksz_o_ulamek(drugi);
    pierwszy.wyswietl();

    return 0;
}

