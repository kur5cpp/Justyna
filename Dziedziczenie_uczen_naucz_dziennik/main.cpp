#include <iostream>
#include "Osoba.h"
#include "Nauczyciel.h"
#include "Uczen.h"
#include "Dziennik.h"

using namespace std;

int main()
{
    Nauczyciel Aga("Agata", 29, "IT", 28);

    Dziennik nasza_klasa(Aga, 3);
    nasza_klasa.wyswietl();

    cout << endl << "Nieobecnosc dla: " << endl;
    int n;
    cin >> n;
    nasza_klasa.dodaj_nieob(n);
    nasza_klasa.wyswietl();
    nasza_klasa.sprawdz_obecnosc();
    nasza_klasa.wyswietl();
    return 0;
}
