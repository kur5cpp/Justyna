#ifndef GRACZ_H
#define GRACZ_H
#include <iostream>
#include "Plansza.h"

using namespace std;

class Gracz
{
    public:
        Gracz();
        Gracz(string nazwa) {login = nazwa; trafione_moje = 0;};
        virtual ~Gracz();
        string login;
        int trafione_moje;
        int strzelaj(Gracz& wrog);
        int graj(Gracz& A, Gracz& B);
    protected:

    private:
};

#endif // GRACZ_H


/// ZAPRZYJAZNIC FUNKCJE I DAC PRIVATE??
