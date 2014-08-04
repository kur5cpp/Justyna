#ifndef UCZEN_H
#define UCZEN_H
#include "Osoba.h"
#include <string>

using namespace std;

class Uczen : public Osoba
{
    public:
        Uczen();
        Uczen(string timie, int twiek, int tnr_komp, int nieob): Osoba(timie, twiek)
        { nr_komp = tnr_komp; liczba_nieob = nieob;}
        virtual ~Uczen();
        int get_nr_komp()
        { return nr_komp;}

        int get_nieob()
        { return liczba_nieob;}

        void set_nieob(int x)
        { liczba_nieob = x; }
    protected:
        int nr_komp;
        int liczba_nieob;
    private:
};

#endif // UCZEN_H
