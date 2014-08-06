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

void Gejm::wypelnij_pole_planszy(int c, int a, Plansza XX)
{
    XX.tab[a][c] = '#';
}

void Gejm::wyswietl_plansze(string nazwa, Plansza XX, Gracz X)
{
    cout << endl << "\t  " << X.login << "Anna" << endl << endl;
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

void Gejm::wypelnij_moja_plansze(string nazwa, Plansza XX, Gracz X)
{
    char c;
    int a;
    char n;
    cout << "Wypelnij swoja plansze! " << endl;
    wyswietl_plansze(nazwa, XX, X);

    for(int i = 0; i < 10; ++i)
    {
        cout << endl << "Podaj wspolrzedne: ";
        cin>>c>>a;

        //tab_statki_AA[0];
        wyswietl_plansze(nazwa, XX, X); ///Sprawdz czy poczatek lezy na planszy
        narysuj_statek(tab_statki_AA[0], XX);
        ///Sprawdz czy koniec lezy na planszy



        system("clear");        ///Wypelnij kratki od poczatku do konca.
    }
    wyswietl_plansze(nazwa, XX, X);
    cout << endl << "Wcisnij N aby przejsc do nastepnego gracza " << endl;
    cin >> n;
    if( n == 'N') system("clear");
}


void Gejm::narysuj_statek(Statki tytanic, Plansza XX)
{
    for(int i=0; i<tytanic.dlugosc; i++)
    {
        if(tytanic.vertical)
            wypelnij_pole_planszy(tytanic.wsp1+i, tytanic.wsp2, XX);
        else
            wypelnij_pole_planszy(tytanic.wsp1, tytanic.wsp2+i, XX);
    }
}
/// XX mooja XY moja wroga
int Gejm::strzelaj(Plansza XX, Plansza XY, Plansza YY, Plansza YX, Gracz X, Gracz Y)
{
once_more:
    cout << endl << "Strzelaj! (Podaj wspolrzedne: )" << endl;
    char c;
    int a;
    cin >> c >> a;
    c = (int)c - 65;
    --a;

    if (YY.tab[a][c] == '#' || YY.tab[a][c] == 'x')
    {
        if(YY.tab[a][c] == '#' || YY.tab[a][c] != 'x')
            X.trafione_moje++;

        YY.tab[a][c] = 'x';
        XY.tab[a][c] = 'x';
        system("clear");
        wyswietl_plansze(X.login, XX, X);
        wyswietl_plansze(Y.login, XY, Y);
        cout << endl << "Trafiony! " << endl;
        if(X.trafione_moje >= 5 || Y.trafione_moje >= 5)
            return 0;
        else
            goto once_more;
    }
    else
    {
        XY.tab[a][c] = '.';
        YY.tab[a][c] = '.';
        system("clear");
        wyswietl_plansze(X.login, XX, X);
        wyswietl_plansze(Y.login, XY, Y);
        cout << endl << "Pudlo! " << endl;
    }
    return 1;
}


int Gejm::graj(Plansza XX, Plansza XY, Plansza YY, Plansza YX, Gracz X, Gracz Y)
{

    wyswietl_plansze(X.login, XX, X); /// przeladowac operator cout << A
    wyswietl_plansze(Y.login, XY, Y); /// przeladowac operator cout << A
    int flag = 1;
    flag = strzelaj(XX, XY, YY, YX, X, Y);
    if( flag == 0 ) return 0;
    cout << endl << "Wcisnij N aby przejsc do nastepnego gracza " << endl;
    char n;
    cin >> n;
    if( n == 'N') system("clear");

    wyswietl_plansze(Y.login, YY, Y); /// przeladowac operator cout << A
    wyswietl_plansze(X.login, YX, X); // MA KONCZYC OD RAZU GDY KTOS WYGRA!
    flag = strzelaj(YY, YX, XX, XY, Y, X);
    if( flag == 0 ) return 0;
    cout << endl << "Wcisnij N aby przejsc do nastepnego gracza " << endl;
    cin >> n;
    if( n == 'N') system("clear"); ///NIECH WYSIWETLA WYGASZACZ LITERAMI NEXT

    return 1;
}
