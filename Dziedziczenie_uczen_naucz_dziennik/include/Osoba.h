#ifndef OSOBA_H
#define OSOBA_H
#include <string>

using namespace std;


class Osoba
{
    public:
        Osoba();
        Osoba(string timie, int twiek)
        {
        imie = timie;
        wiek = twiek;
        }
        virtual ~Osoba();
        string get_imie()
        {
            return imie;
        }
        int get_wiek()
        {
            return wiek;
        }
    protected:
        string imie;
        int wiek;
    private:
};

#endif // OSOBA_H
