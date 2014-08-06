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
        //Statki tab_statki_BB[10]; // trzeba cps z tym zrobic

        void wypelnij_pole_planszy(int c, int a, Plansza XX);
        void wyswietl_plansze(string nazwa, Plansza XX, Gracz X);
        void wypelnij_moja_plansze(string nazwa, Plansza XX, Gracz X);
        void narysuj_statek(Statki tytanic, Plansza XX);

        int strzelaj(Plansza XX, Plansza XY, Plansza YY, Plansza YX, Gracz X, Gracz Y);
        int graj(Plansza XX, Plansza XY, Plansza YY, Plansza YX, Gracz X, Gracz Y);
        // dodac funkcje ktora losuje statki
        // flagowac miejsca wokol narysowanego statku
        // sprawdzac czy mozna tam narysowac statek
    protected:
    private:
};

#endif // GEJM_H
