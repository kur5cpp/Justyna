#ifndef PLANSZA_H
#define PLANSZA_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Plansza
{
    public:
        Plansza();
        void wypelnij_moja_plansze(string nazwa);
        void wyswietl_plansze(string nazwa);
        virtual ~Plansza();
    protected:
        char tab[10][10];
    private:
};

#endif // PLANSZA_H
