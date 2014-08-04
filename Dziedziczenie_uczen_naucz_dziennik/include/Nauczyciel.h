#ifndef NAUCZYCIEL_H
#define NAUCZYCIEL_H
#include "Osoba.h"
#include <string>

using namespace std;

class Nauczyciel : public Osoba
{
    public:
        Nauczyciel();
        Nauczyciel(string timie, int twiek, string tprzedmiot, int tsala): Osoba(timie, twiek)
        {
            przedmiot = tprzedmiot;
            sala = tsala;
        }
        string get_przed()
        {
            return przedmiot;
        }
        virtual ~Nauczyciel();
    protected:
        string przedmiot;
        int sala;
    private:
};

#endif // NAUCZYCIEL_H
