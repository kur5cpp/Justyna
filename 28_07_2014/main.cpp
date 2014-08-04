#include <iostream>
#include <string>

using namespace std;

struct Osoba
{
    string imie;
    int wiek;
};

Osoba** wypelnij_tabl(Osoba** tabl, int rozmiar)
{
    cout << "Podaj imie i wiek: " << endl;
    for(int i = 0; i < rozmiar; ++i)
    {
        *(tabl + i) = new Osoba;
        cin >> (*(tabl + i))->imie;
        cin >> (*(tabl + i))->wiek;
    }
    return tabl;
}

Osoba** usun_osobe(Osoba** tabl, int& rozmiar, string imie)
{
    int flag = 0;
    for(int i = 0; i < rozmiar; ++i)
    {
        if((*(tabl + i))->imie == imie)
            flag = 1;
    }

    if(flag == 1)
    {
        --rozmiar;
        Osoba** nowa_tabl = new Osoba*[rozmiar];
        for(int i = 0, j = 0; i < (rozmiar + 1); ++i)
        {
            if( (*(tabl + i))->imie != imie )
            {
                *(nowa_tabl + j) = new Osoba;
                (*(nowa_tabl + j))->imie = (*(tabl + i))->imie;
                (*(nowa_tabl + j))->wiek = (*(tabl + i))->wiek;
                ++j;
            }
        }
        for(int i = 0; i < (rozmiar + 1); ++i)
            delete *(tabl + i);
        delete []tabl;

        return nowa_tabl;
    }
    else
        return tabl; // gdy nie znaleziono takiego imienia
}

Osoba** dodaj_osobe(Osoba** tabl, int& rozmiar, string n_imie, int n_wiek)
{
    ++rozmiar;
    Osoba** nowa_tabl = new Osoba*[rozmiar];
    for(int i = 0; i < (rozmiar - 1); ++i)
    {
        *(nowa_tabl + i) = new Osoba;
        (*(nowa_tabl + i))->imie = (*(tabl + i))->imie;
        (*(nowa_tabl + i))->wiek = (*(tabl + i))->wiek;
    }

    *(nowa_tabl + rozmiar - 1) = new Osoba;
    (*(nowa_tabl + rozmiar - 1))->imie = n_imie;
    (*(nowa_tabl + rozmiar - 1))->wiek = n_wiek;

    for(int i = 0; i < (rozmiar - 1); ++i)
        delete *(tabl + i);
    delete []tabl;

    return nowa_tabl;
}

void wysw_tabl(Osoba** tabl, int rozmiar)
{
    for(int i = 0; i < rozmiar ; ++i)
        cout << (*(tabl + i))-> imie << "\t" << (*(tabl + i))->wiek << endl;
}

int main()
{
    int rozmiar = 3;
    Osoba** baza = new Osoba*[rozmiar];

    baza = wypelnij_tabl(baza, rozmiar);
    cout << endl << "Lista osob: " << endl;
    wysw_tabl(baza, rozmiar);

    cout << endl << "Kogo usuwamy?" << endl;
    string kogo;
    cin >> kogo;
    baza = usun_osobe(baza, rozmiar, kogo);
    cout << endl << "Aktualna lista osob: " << endl;
    wysw_tabl(baza, rozmiar);

    cout << endl << "Kogo dodajemy? Imie i wiek: " << endl;
    string imie;
    cin >> imie;
    int wiek;
    cin >> wiek;
    baza = dodaj_osobe(baza, rozmiar, imie, wiek);
    cout << endl << "Aktualna lista osob: " << endl;
    wysw_tabl(baza, rozmiar);

    return 0;
}
