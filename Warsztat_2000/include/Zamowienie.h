#ifndef ZAMOWIENIE_H
#define ZAMOWIENIE_H
#include <iostream>
#include <vector>
#include "Pracownik.h"
#include "Klient.h"
#include "Usluga.h"


using namespace std;

class Zamowienie
{
    public:
        Zamowienie();
        virtual ~Zamowienie();
        void wyswietl_zamowienie();
        void ustaw_status_wykonania(bool czy_wyk);
        void ustaw_ze_zaplacono(bool czy_zap);
        void wprowadz_date_odbioru(string data);
        void zmien_elementy_zamowienia();
    protected:
    private:
        static int licznik_zam;
        int nr_zamowienia;
        vector<Usluga> uslugi;
        string data_zlozenia_zamowienia;
        string data_odbioru_zamowienia;
        bool czy_zaplacono;
        bool czy_wykonano;
        Klient klient_zam;
        Pracownik pracownik_zam;
};

#endif // ZAMOWIENIE_H
