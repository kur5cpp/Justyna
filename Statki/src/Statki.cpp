#include "Statki.h"
#include "Plansza.h"
#include "Gracz.h"

Statki::Statki()
{
    //ctor
}

Statki::licznik = 0;

Statki::Statki(char c, int a, bool vert)
{
    wsp1=c;
    wsp2=a;
    dlugosc= dl_statku[licznik];
    vertical=vert;//false==hotizontal
    ++licznik;
    if( licznik == 10) licznik = 0; // jak bedzie problem to moze byc tutaj
}

Statki::~Statki()
{
    //dtor
}

void Statki::fill_govert()
{
    for(int i=0; i<dlugosc; i++)
        Plansza::pl_moja.wypelnij_pole(wsp1, wsp2+i);
}

void Statki::fill_horiz(Statki)
{

}

void Statki::chk_grid(Statki)
{

    cout<<"Prosze podac wartosc z zakresu: 1-10; A-J";
}

void Statki::chkfix_sur()
{

}

void Statki::random_fill()
{

}
