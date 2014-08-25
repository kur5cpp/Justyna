#ifndef BAZA_ZAMOWIEN_H
#define BAZA_ZAMOWIEN_H
#include "Zamowienie.h"

using namespace std;
class Baza_zamowien
{
    public:
        Baza_zamowien();
        virtual ~Baza_zamowien();
    protected:
    private:
        vector<Zamowienie> baza;
    //metody::
//        void wczytaj_baze_z_pliku();
//        void zapisz_baze_do_pliku();
//
//        void wyswietl_liste_zamowien();
//        void dodaj_zamowienie();
//        void usun_zamowienie();
//        void edytuj_zamowienie();
//        void wyszukaj_zamowienie();
};

#endif // BAZA_ZAMOWIEN_H
