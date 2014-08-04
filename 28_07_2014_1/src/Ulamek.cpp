#include <iostream>
#include "Ulamek.hpp"

using namespace std;

Ulamek::Ulamek()
{
    //ctor
}

Ulamek::~Ulamek()
{
    //dtor
}

void Ulamek::odwrotnosc()
{
    int temp = mianownik;
    mianownik = licznik;
    licznik = temp;
}

void Ulamek::wyswietl()
{
    cout << licznik << "\\" << mianownik << endl;
}

void Ulamek::mnoz(int liczba)
{
    licznik = licznik * liczba;
}

void Ulamek::dodaj(Ulamek pierwszy, Ulamek drugi)
{
    licznik = pierwszy.licznik* drugi.mianownik + drugi.licznik*pierwszy.mianownik;
    mianownik = pierwszy.mianownik * drugi.mianownik;
}

void Ulamek::zwieksz_o_ulamek(Ulamek drugi)
{
    licznik = licznik* drugi.mianownik + drugi.licznik*mianownik;
    mianownik = mianownik * drugi.mianownik;

}
