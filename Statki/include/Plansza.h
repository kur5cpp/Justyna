#ifndef PLANSZA_H
#define PLANSZA_H
#include <iostream>
#include <stdlib.h>
#include <Statki.h>
using namespace std;

class Plansza
{
    public:
        Plansza();
        void wypelnij_moja_plansze(string nazwa);
        void wyswietl_plansze(string nazwa);
        void wypelnij_pole(char c, int a);
        virtual ~Plansza();
        Statki statek;
    protected:
        char tab[10][10];
    private:
};

#endif // PLANSZA_H
