#ifndef GEJM_H
#define GEJM_H
#include "Gracz.h"
#include "Plansza.h"
#include "Statki.h"

class Gejm
{
    public:
        Gejm();
        Gejm(string imie_A, string imie_B);
        virtual ~Gejm();

        Gracz A;
        Gracz B;

        Plansza AA;
        Plansza AB;
        Plansza BB;
        Plansza BA;

        Statki tab_statki_AA[10];
        Statki tab_statki_BB[10];

        void wypelnij_pole_planszy(char &c, int &a, Plansza XX);
        void wyswietl_plansze(string nazwa, Plansza XX);
        void wypelnij_moja_plansze(string nazwa, Plansza XX);

    protected:
    private:
};

#endif // GEJM_H
