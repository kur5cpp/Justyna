#include <iostream>
#include "Zamowienie.h"
#include "Baza_zamowien.h"
#include "Pracownik.h"
#include "Czlowiek.h"
#include "Klient.h"
#include "Usluga.h"

using namespace std;

int main()
{
    Zamowienie test;
    test.wyswietl_zamowienie();
    cout << "gotowe"<< endl;
    return 0;
}
