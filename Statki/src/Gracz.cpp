#include "Gracz.h"

Gracz::Gracz()
{
    //ctor
}

Gracz::~Gracz()
{
    //dtor
}

int Gracz::strzelaj(Gracz& wrog)
{
once_more:
    cout << endl << "Strzelaj! (Podaj wspolrzedne: )" << endl;
    char c;
    int a;
    cin >> c >> a;
    c = (int)c - 65; /// funkcja ktora przyjmuje a i c  i wczytuje je
    --a;

    if (wrog.pl_moja.tab[a][c] == '#' || wrog.pl_moja.tab[a][c] == 'x')
    {
        if(wrog.pl_moja.tab[a][c] == '#' || wrog.pl_moja.tab[a][c] != 'x')
            trafione_moje++;

        wrog.pl_moja.tab[a][c] = 'x';
        pl_wroga.tab[a][c] = 'x';
        system("clear");
        pl_moja.wyswietl_plansze(login);
        pl_wroga.wyswietl_plansze(wrog.login);
        cout << endl << "Trafiony! " << endl;
        if(trafione_moje >= 5 || wrog.trafione_moje >= 5)
            return 0;
        else
            goto once_more;
    }
    else
    {
        pl_wroga.tab[a][c] = '.';
        system("clear");
        pl_moja.wyswietl_plansze(login);
        pl_wroga.wyswietl_plansze(wrog.login);
        cout << endl << "Pudlo! " << endl;
    }
    return 1;
}

int Gracz::graj(Gracz& A, Gracz& B)
{

    A.pl_moja.wyswietl_plansze(A.login); /// przeladowac operator cout << A
    A.pl_wroga.wyswietl_plansze(B.login); /// przeladowac operator cout << A
    int flag = 1;
    flag = A.strzelaj(B);
    if( flag == 0 ) return 0;
    cout << endl << "Wcisnij N aby przejsc do nastepnego gracza " << endl;
    char n;
    cin >> n;
    if( n == 'N') system("clear");

    B.pl_moja.wyswietl_plansze(B.login);
    B.pl_wroga.wyswietl_plansze(A.login); // MA KONCZYC OD RAZU GDY KTOS WYGRA!
    flag = B.strzelaj(A);
    if( flag == 0 ) return 0;
    cout << endl << "Wcisnij N aby przejsc do nastepnego gracza " << endl;
    cin >> n;
    if( n == 'N') system("clear"); ///NIECH WYSIWETLA WYGASZACZ LITERAMI NEXT

    return 1;
}
