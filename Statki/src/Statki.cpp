#include "Statki.h"

Statki::Statki()
{
    //ctor
}

Statki::Statki(char c, int a, int N, bool vert)
{
    wsp1=c;
    wsp2=a;
    dlugosc=N;
    vertical=vert;
}

Statki::~Statki()
{
    //dtor
}

void Statki::fill_govert(Statki wejscie)
{
    for(int i=0; i<wejscie.dlugosc; i++)
        wypelnij_pole(wejscie.wsp1, wejscie.wsp2+i);
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