#include "Plansza.h"
using namespace std;

Plansza::Plansza()
{
    for(int i = 0; i < 10; ++i)
    {
        for(int j = 0; j < 10; ++j)
            tab[i][j] = ' ';
    }
}

Plansza::~Plansza()
{
    //dtor
}

void Plansza::wypelnij_moja_plansze(string nazwa)
{
    for(int i = 0; i < 4; ++i)
    {
        wyswietl_plansze(nazwa);
        cout << endl << "Podaj wspolrzedne: " ;
        char c;
        int a;
        cin >> c >> a;
        c = (int)c - 65;
        --a;
        tab[a][c] = '#';
        system("clear");
    }
}

void Plansza::wyswietl_plansze(string nazwa)
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
            cout << tab[i][j];
        }
        cout.width(3);
        cout << (i + 1);
        cout << endl;
    }
    cout << "   A B C D E F G H I J " << endl;
}
