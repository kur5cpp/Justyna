#include <iostream>
#include <stdlib.h>
#include "Plansza.h"
#include "Gracz.h"

using namespace std;

void wyswietl_statki() // dopisac klase
{
    cout << endl << "1x ####" << endl << "2x ###" << endl << "3x ##" << endl << "4x #" << endl;
}

int main()
{
    Gracz A("Ja");
    Gracz B("Wrog");
    Plansza AA;
    Plansza AB;

    AA.wypelnij_moja_plansze(A.login);
    AA.wyswietl_plansze(A.login);
    AB.wyswietl_plansze(B.login);



    return 0;
}


// KLASA gracz ma miec skladowe 2 plansze, i sumy trafien
