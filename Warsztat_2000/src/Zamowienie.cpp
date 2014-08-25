#include "Zamowienie.h"

//using namespace std;

int Zamowienie::licznik_zam = 0;

Zamowienie::Zamowienie()
{
    ++licznik_zam;
    nr_zamowienia = licznik_zam;
}

Zamowienie::~Zamowienie()
{
    //dtor
}

void Zamowienie::wyswietl_zamowienie()
{
    cout<<nr_zamowienia<<"./"<<"uslugi"<<"/"<<"data zam."<<"/"<<"data odb.";
    cout<<"/"<<czy_zaplacono<<"/"<<czy_wykonano<<"/"<<"Klient"<<"/";
    cout<<"Pracownik"<<endl;
}

void Zamowienie::ustaw_status_wykonania(bool czy_wyk)
{
    czy_wykonano=czy_wyk;
}

void Zamowienie::ustaw_ze_zaplacono(bool czy_zap)
{
    czy_zaplacono=czy_zap;
}

void Zamowienie::wprowadz_date_odbioru(string data)
{
    data_odbioru_zamowienia=data;
}

void Zamowienie::zmien_elementy_zamowienia()
{

}
