#include <iostream>
#include <stdlib.h>
#include "Plansza.h"
#include "Gracz.h"
#include "Statki.h"

using namespace std;


int main()
{
    A.pl_moja.wypelnij_moja_plansze(A.login);
    system("clear");
    B.pl_moja.wypelnij_moja_plansze(B.login);
    system("clear");

    int czy_grac = 1;
    do{
    czy_grac = A.graj(A, B); /// GRAJ NIE POWINNO BYC W FUNKCJI GRACZ
    }while ( czy_grac  == 1 ) ;


    if (A.trafione_moje > B.trafione_moje)
        cout << endl << "Wygral: " << A.login << endl;
    else
        cout << endl << "Wygral: " << B.login << endl;

    return 0;
}


// KLASA gracz ma miec skladowe 2 plansze, i sumy trafien
