#include <iostream>
#include <stdlib.h>

using namespace std;

void stworz_pusta_tablice(char tab[10][10], char z)
{
    for(int i = 0; i < 10; ++i)
    {
        for(int j = 0; j < 10; ++j)
        {
            tab[i][j] = z;
        }
    }
}

void wyswietl_plansze(char tab[10][10], string nazwa)
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

void wyswietl_statki() // dopisac klase
{
    cout << endl << "1x ####" << endl << "2x ###" << endl << "3x ##" << endl << "4x #" << endl;
}

void wypelnij_moja_plansze(char tab[10][10])
{
    for(int i = 0; i < 4; ++i)
    {
        wyswietl_plansze(tab, "Test");
        cout << endl << "Podaj wspolrzedne: " ;
        char c;
        int a;
        cin >> c >> a;
        c = (int)c - 65;
        --a;
        tab[a][c] = '#';
        system("clear");
    }
    wyswietl_plansze(tab, "Test");
}

int main()
{
    char tab_AA[10][10];
    char tab_AB[10][10];
    stworz_pusta_tablice(tab_AA, ' ');
    stworz_pusta_tablice(tab_AB, ' ');

    wypelnij_moja_plansze(tab_AA);
    wyswietl_plansze(tab_AB, "Wrog");



    return 0;
}
