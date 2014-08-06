#include "Statki.h"
#include "Plansza.h"
#include "Gracz.h"

Statki::Statki()
{
    //ctor
}

int Statki::licznik = 0;

Statki::Statki(char c, int a, bool vert)
{
    wsp1 = (int)c - 65;
    wsp2=--a;
    dlugosc= dl_statku[licznik];
    vertical=vert;//false==hotizontal
    ++licznik;
    if( licznik == 10) licznik = 0; // jak bedzie problem to moze byc tutaj
}

Statki::~Statki()
{
    //dtor
}


