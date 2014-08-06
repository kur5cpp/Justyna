#include "Gejm.h"
#include <string>
#include "Plansza.h"
#include "Statki.h"

using namespace std;


Gejm::Gejm()
{
    //ctor
}

Gejm::Gejm(string imie_A, string imie_B)
{
    Gracz A(imie_A);
    Gracz B(imie_B);
}

Gejm::~Gejm()
{
    //dtor
}

void Gejm::wypelnij_pole_planszy(char &c, int &a, Plansza XX)
{
    c = (int)c - 65;
    --a;
    XX.tab[a][c] = '#';
}

void Gejm::wyswietl_plansze(string nazwa, Plansza XX)
{
    cout << endl << "\t  " << nazwa << endl << endl;
    cout << "   A B C D E F G H I J " << endl;
    for(int i = 0; i < 10; ++i)
    {
        cout.width(2);
        cout << (i + 1);
        for(int j = 0; j < 10; ++j)
        {
            cout.width(2);
            cout << XX.tab[i][j];
        }
        cout.width(3);
        cout << (i + 1);
        cout << endl;
    }
    cout << "   A B C D E F G H I J " << endl;
}

void Gejm::wypelnij_moja_plansze(string nazwa, Plansza XX)
{
    char c;
    int a;
    char n;
    cout << "Wypelnij swoja plansze! " << endl;
    for(int i = 0; i < 10; ++i)
    {
        cout << endl << "Podaj wspolrzedne: ";
        cin>>c>>a;



        Statki statek_test(c, a, 4, true); /// tworzone w Gejm!!!!!

        wyswietl_plansze(nazwa);///Sprawdz czy poczatek lezy na planszy
        statek_test.fill_govert();
//        wypelnij_pole(c, a);        ///Sprawdz czy koniec lezy na planszy



        system("clear");        ///Wypelnij kratki od poczatku do konca.
    }
    wyswietl_plansze(nazwa, XX);
    cout << endl << "Wcisnij N aby przejsc do nastepnego gracza " << endl;
    cin >> n;
    if( n == 'N') system("clear");
}
