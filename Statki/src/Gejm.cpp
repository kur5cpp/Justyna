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
    A.login = imie_A;
    B.login = imie_B;
}

Gejm::~Gejm()
{
    //dtor
}

void Gejm::wygaszacz()
{
    system("clear");
    for(int i = 0; i < 15; ++i)
    {
        cout.width(50);
        cout << endl << endl <<"Press N to continue! " << endl << endl;
    }
}

void Gejm::wypelnij_pole_planszy(int c, int a, Plansza& XX)
{
    if ( XX.tab[a][c] != '#' || XX.tab[a][c] != 'f' )
    {
        XX.tab[a][c] = '#';

        if( !(a-1 < 0 || a-1 > 10 || c-1< 0 || c-1> 10 ) && XX.tab[a-1][c-1] != '#')
            XX.tab[a-1][c-1] = 'm';

        if( !(a < 0 || a > 10 || c-1< 0 || c-1> 10 )&& XX.tab[a][c-1] != '#')
            XX.tab[a][c-1] = 'm';

        if( !(a+1 < 0 || a+1 > 10 || c-1< 0 || c-1> 10 )&& XX.tab[a+1][c-1] != '#')
            XX.tab[a+1][c-1] = 'm';

        if(!( a-1 < 0 || a-1 > 10 || c< 0 || c> 10 )&& XX.tab[a-1][c] != '#')
            XX.tab[a-1][c] = 'm';

        if( !(a+1 < 0 || a+1 > 10 || c< 0 || c> 10 )&& XX.tab[a+1][c] != '#')
            XX.tab[a+1][c] = 'm';

        if(!( a-1 < 0 || a-1 > 10 || c+1< 0 || c+1> 10 )&& XX.tab[a-1][c+1] != '#')
            XX.tab[a-1][c+1] = 'm';

        if(!( a < 0 || a > 10 || c+1< 0 || c+1> 10 )&& XX.tab[a][c+1] != '#')
            XX.tab[a][c+1] = 'm';

        if(!( a+1 < 0 || a+1 > 10 || c+1< 0 || c+1> 10 )&& XX.tab[a+1][c+1] != '#')
            XX.tab[a+1][c+1] = 'm';
    }
}

void Gejm::wyswietl_plansze(Plansza XX, Gracz X)
{
    cout << endl << "\t  " << X.login << endl << endl;
    cout << "   A B C D E F G H I J " << endl;
    for(int i = 0; i < 10; ++i)
    {
        cout.width(2);
        cout << (i + 1);
        for(int j = 0; j < 10; ++j)
        {
            cout.width(2);
            if( XX.tab[i][j] == 'f')
                cout << " " ;
            else
                cout << XX.tab[i][j];
        }
        cout.width(3);
        cout << (i + 1);
        cout << endl;
    }
    cout << "   A B C D E F G H I J " << endl;
}

void Gejm::wypelnij_moja_plansze(Plansza& XX, Gracz X)
{
    char c;
    int a;
    bool v;
    char n;
    int flag;
    cout << "Wypelnij swoja plansze! " << endl;
    ///SYSTEM CLEAR?
    system("clear");
    wyswietl_plansze(XX, X);

    for(int i = 0; i < 10; ++i)
    {
        flag = 1;
        while ( flag != 0 )
        {
            cout << endl << "Podaj wspolrzedne: ";
            cout << endl << "Pionowo: 1 / Poziomo: 0" << endl;
            cin>> c >> a >> v;

            tab_statki_AA[i] = new Statki(c, a, v);
            flag = czy_statek_lezy_na_planszy(tab_statki_AA[i], XX);
            flag += spr_czy_mozna_postawic_statek(tab_statki_AA[i], XX);
            if (flag != 0 )
            {
                cout << "Zla wspolrzedna. Jeszcze raz!" << endl;
                delete tab_statki_AA[i];
            }
        }
        narysuj_statek(tab_statki_AA[i], XX);    ///Sprawdz czy koniec lezy na planszy
        system("clear");                         ///Wypelnij kratki od poczatku do konca.
        wyswietl_plansze(XX, X);                ///Sprawdz czy poczatek lezy na planszy
    }
    przejscie_next();
}

void Gejm::narysuj_statek(Statki* tytanic, Plansza& XX)
{
    for(int i = 0; i < tytanic->dlugosc; i++)
    {
        if(tytanic->vertical)
            wypelnij_pole_planszy(tytanic->wsp1, tytanic->wsp2+i, XX);
        else
            wypelnij_pole_planszy(tytanic->wsp1+i, tytanic->wsp2, XX);
    }
    zmien_flagi(XX);
}

int Gejm::strzelaj(Plansza& XX, Plansza& XY, Plansza& YY, Plansza& YX, Gracz X, Gracz Y)
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
        wyswietl_plansze(XX, X);
        wyswietl_plansze(XY, Y);
        cout << endl << "Trafiony! " << endl;
        if(X.trafione_moje >= 20 || Y.trafione_moje >= 20)
            return 0;
        else
            goto once_more;
    }
    else
    {
        XY.tab[a][c] = '.';
        YY.tab[a][c] = '.';
        system("clear");
        wyswietl_plansze(XX, X);
        wyswietl_plansze(XY, Y);
        cout << endl << "Pudlo! " << endl;
    }
    return 1;
}


int Gejm::graj(Plansza& XX, Plansza& XY, Plansza& YY, Plansza& YX, Gracz X, Gracz Y)
{
///SYSTEM CLEAR
system("clear");
    wyswietl_plansze(XX, X);
    wyswietl_plansze(XY, Y);
    int flag = 1;
    flag = strzelaj(XX, XY, YY, YX, X, Y);
    if( flag == 0 ) return 0;
    przejscie_next();
/// SYSTEM CLEAR
system("clear");
    wyswietl_plansze(YY, Y);
    wyswietl_plansze(YX, X);
    flag = strzelaj(YY, YX, XX, XY, Y, X);
    if( flag == 0 ) return 0;
    przejscie_next();

    return 1;
}

int Gejm::czy_statek_lezy_na_planszy(Statki* statek, Plansza XX)
{
    if( statek->wsp1 < 0 || statek->wsp1 > 10 || statek->wsp2 < 0 || statek->wsp2 > 10 ) return 1;
    int wsp_k_1 = statek->wsp1;
    int wsp_k_2 = statek->wsp2;
    if( statek->vertical == true ) /// pionowy
        wsp_k_2 += statek->dlugosc;
    else /// dla poziomego
        wsp_k_1 += statek->dlugosc;

    if( wsp_k_1 < 0 || wsp_k_1 > 10 || wsp_k_2 < 0 || wsp_k_2 > 10 ) return 2;
    ///wyjatek zrobic
    return 0;
}

int Gejm::sprawdz_pole(int c, int a, Plansza XX)
{
    if ( XX.tab[a][c] == '#' || XX.tab[a][c] == 'f' ) return 1;
    return 0;
}

int Gejm::spr_czy_mozna_postawic_statek(Statki* statek, Plansza XX)
{
    int flag = 0;
    for(int i = 0; i < statek->dlugosc; i++)
    {
        if(statek->vertical)
            flag += sprawdz_pole(statek->wsp1, statek->wsp2+i, XX);
        else
            flag += sprawdz_pole(statek->wsp1, statek->wsp2+i, XX);
    }
    return flag;
}

void Gejm::zmien_flagi(Plansza & XX)
{
    for(int i = 0; i < 10; ++i)
    {
        for(int j = 0; j < 10; ++j)
        {
            if(XX.tab[i][j] == 'm')
                XX.tab[i][j] = 'f';
        }
    }
}

void Gejm::przejscie_next()
{
    cout << endl << "Wcisnij P aby wygasic: " << endl;
    char n;
    cin >> n;
    if( n != 'N') wygaszacz();
    cin >> n;
    if( n == 'N') system("clear");
}
