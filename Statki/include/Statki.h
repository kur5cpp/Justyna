#ifndef STATKI_H
#define STATKI_H
//#include "Plansza.h"


class Statki
{
    public:
        Statki();
        Statki(char c, int a, bool vert);
        virtual ~Statki();
        static licznik;
        int dl_statku[10]={4, 3, 3, 2, 2, 2, 1, 1, 1, 1};
        char wsp1;
        int wsp2;
        int dlugosc;
        bool vertical;

        void fill_govert();
        void fill_horiz(Statki wejscie);
        void chk_grid(Statki wejscie);
        void chkfix_sur();
        void random_fill();

    protected:
    private:
};

#endif // STATKI_H
