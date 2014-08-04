#ifndef DZIENNIK_H
#define DZIENNIK_H
#include "Osoba.h"
#include "Nauczyciel.h"
#include "Uczen.h"
#include <iostream>
#include <iomanip>

using namespace std;

class Dziennik
{
public:
    Dziennik();
    Dziennik(Nauczyciel tbelfer, int tl_uczniow)
    {
        l_uczniow = tl_uczniow;
        string im;
        int w;
        int n_k;
        belfer = tbelfer;
        cout << "Uczen: imie wiek stanowisko" << endl;
        for(int i = 0; i < l_uczniow; ++i)
        {
            cin >> im >> w >> n_k;
            *(lista + i) = new Uczen(im, w, n_k, 0);
        }
    }

    void wyswietl()
    {
        cout << endl << "Przedmiot: " << belfer.get_przed() << "      Prowadzacy: " << belfer.get_imie() << endl;
        for(int i = 0; i < l_uczniow; ++i)
        {
            cout << left  << (i+1) <<  ". "
                 << setw(10) << left << lista[i]->get_imie()
                 << setw(10) << right << "wiek: " << lista[i]->get_wiek() << " l "
                 << setw(10) << " stanowisko: " << lista[i]->get_nr_komp()
                 << setw(17) << " nieobecnosci: " << lista[i]->get_nieob() << endl;
        }
    }

    void wyswietl_1(int i)
    {
        cout << left  << (i+1) <<  ". "
             << setw(10) << left << lista[i]->get_imie()
             << setw(10) << right << "wiek: " << lista[i]->get_wiek() << " l "
             << setw(10) << " stanowisko: " << lista[i]->get_nr_komp()
             << setw(17) << " nieobecnosci: " << lista[i]->get_nieob() << endl;

    }
    void dodaj_nieob(int nr_w_dzienniku)
    {
        int nr = lista[nr_w_dzienniku - 1]->get_nieob();
        ++nr;
        (lista[nr_w_dzienniku - 1]->set_nieob(nr));
    }
    virtual ~Dziennik();
    void sprawdz_obecnosc()
    {
    cout << "sprawdzam obecnosc " << endl;
    char o;
        for(int i = 0; i < l_uczniow; ++i)
        {
            wyswietl_1(i);
            cin >> o;
            if( o != 'o' )
                dodaj_nieob(i);
        }
    }
protected:
        Nauczyciel belfer;
        int l_uczniow;
        Uczen** lista = new Uczen*[l_uczniow];
private:
    };

#endif // DZIENNIK_H
