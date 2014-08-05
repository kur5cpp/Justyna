#ifndef STATKI_H
#define STATKI_H
//#include "Plansza.h"


class Statki
{
    public:
        Statki();
        Statki(char c, int a, int N, bool vert);
        virtual ~Statki();
        int statki[10]={4, 3, 3, 2, 2, 2, 1, 1, 1, 1};
        char wsp1;
        int wsp2;
        int dlugosc;
        bool vertical;
        void fill_govert(Statki);
        void fill_horiz(Statki);
        void chk_grid(Statki);
        void chkfix_sur();
        void random_fill();

    protected:
    private:
};

#endif // STATKI_H
