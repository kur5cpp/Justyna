#include <iostream>
#include <stdlib.h>
#include "Plansza.h"
#include "Gracz.h"
#include "Statki.h"
#include "Gejm.h"
#include "Menu.h"

using namespace std;


int main()
{
    Menu me;
    me.menu_ekran_startowy();
    Gejm gra("Anna", "Bartek");
    gra.wypelnij_moja_plansze(gra.AA, gra.A);
    gra.wypelnij_moja_plansze(gra.BB, gra.B);

    int czy_grac = 1;
    do
    {
        czy_grac = gra.graj(gra.AA, gra.AB, gra.BB, gra.BA, gra.A, gra.B);
    }
    while ( czy_grac  == 1 ) ;

    if (gra.A.trafione_moje > gra.B.trafione_moje)
        cout << endl << "Wygral: " << gra.A.login << endl;
    else
        cout << endl << "Wygral: " << gra.B.login << endl;

    return 0;
}


///WYSWIETLACZ next_pe




/// gdy caly statek bedzie zatopiony
///losowanie statkow
