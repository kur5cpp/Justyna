#ifndef STATKI_H
#define STATKI_H
//#include "Plansza.h"


class Statki
{
    public:
        Statki();
        Statki(char c, int a, bool vert);
        virtual ~Statki();
        static int licznik;
        int dl_statku[10]={4, 3, 3, 2, 2, 2, 1, 1, 1, 1};
        int wsp1;
        int wsp2;
        int dlugosc;
        bool vertical;

    protected:
    private:
};

#endif // STATKI_H
