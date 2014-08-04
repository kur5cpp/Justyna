#include <iostream>
#include <stdlib.h>

#define ROZMIAR 3

using namespace std;

int main()
{
    srand(time(NULL));
    int tab[ROZMIAR];
    for(int i = 0; i < ROZMIAR; ++i)
    {
    tab[i] =(double)(rand()%100);
    cout << tab[i] << endl;
    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


    int i = 0;
    double min1 = tab[0];

    for (; i < ROZMIAR; ++i)
    {
    if(min1 > tab[i])
        min1 = tab[i];
    }
    double min2;
    tab[0] == min1 ? min2 = tab[1] : min2 = tab[0] ;

    for (int i = 0; i < ROZMIAR; ++i)
    {
    if(min2 > tab[i] && tab[i] != min1)
        min2 = tab[i];
    }


    cout << endl << "Pierwsza najmniejsza: " << min1 << endl;
    cout << "Druga najmniejsza: " << min2 << endl ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   /* double schowek = 0;
    int i = 0;
    int czujnik = 0;

    do{
        czujnik = 0;
        for(int i = 0; i < ROZMIAR - 1; ++i)
        {
            if(tab[i] > tab[i + 1])
            {
                swap(tab[i], tab[i + 1]);
                czujnik = 1;
            }
        }
    }while(czujnik == 1);
    */
/////////////////////////////////////////////////" poprawic algorytm "////////////////////////////////////////
    double sort2[ROZMIAR] = {0};

    double mini = tab[0];
    int flaga = 0;
    for(int j = 0; flaga == 1; )
    {
    j = 0;
    flaga = 0;
        for (int i = j; i < ROZMIAR; ++i)
        {
            if(mini > tab[i] && tab[i] > sort2[j - 1])
            {
                mini = tab[i];
                sort2[j] = mini;
                ++j;
                flaga = 1;
            }
        }
    }
  /////////////
    int i = 0;
    double min1 = tab[0];

    for (; i < ROZMIAR; ++i)
    {
    if(min1 > tab[i])
        min1 = tab[i];
    }
//////
    cout << endl << "Posortowano to co nie dzialalo! " << endl;
    for(int i = 0; i < ROZMIAR; ++i)
    {
    cout << sort2[i] << endl;
    }
/*

    int zliczanie[ROZMIAR];
    for(int i = 0; i < ROZMIAR; ++i)
    {
    zliczanie[i] = 0;
    }

    for(int i = 0; i < ROZMIAR; ++i)
        zliczanie[tab[i]] += 1;



    cout << endl << "Nie posortowano! " << endl << endl;
    for(int i = 0; i < ROZMIAR; ++i)
    {
    cout << tab[i] << endl;
    }
    cout << endl << "Posortowano! " << endl << endl;

    for(int j = 0; j < ROZMIAR; ++j)
    {
        for(int i = 0; i < zliczanie[j]; ++i)
        {
        cout << j << endl;
        }

    }
    cout << endl;

    int macierz[2][2];
    for(int j = 0; j < 2; ++j)
    {

        for(int i = 0; i < 2; ++i)
        {
        cout.width(6);
            macierz[j][i] = rand()%201 - 100;
            cout /*<< internal << macierz[j][i] /*<< internal */;
      /*  }
        cout << endl;
    }
    cout << endl;
    cout << "Ktory wiersz? " << endl;
    int wiersz;
    cin >> wiersz;
        cout << endl;
        for(int i = 0; i < 3; ++i)
            cout << macierz[wiersz - 1][i] << "\t";
        cout << endl;


    cout << "Ktora kolumna? " << endl;
    int kolumna;
    cin >> kolumna;
    cout << endl;

        for(int i = 0; i < 3; ++i)
        {
        cout.width(3);
            cout  << macierz[i][kolumna - 1]  << endl;
            }
        cout << endl;



        cout << "Przekatna" << endl;
        for(int i = 0, j = 0; i < 3; ++i, ++j)
        {
            cout << macierz[i][j] << "\t";
        }
        cout << endl;


        cout << "Przekatna odwrotna" << endl;
        for(int i = 0, j = 2; i < 3 && j >= 0 ; ++i, --j)
        {
            cout << macierz[i][j] << "\t";
        }
        cout << endl;

//trans. macierzy
        int c;
        int z = 2;
        int x = 2;
       for(int j = 0, i = 0; j <= z; ++j, --z, --x)
        {
            for(; i < x; ++i )
            {
                c = macierz[j][i];

                macierz[j][i] = macierz[i][j];
                macierz[i][j] = c;
            }
        }

    for(int j = 0; j < 2; ++j)
    {
        for(int i = 0; i < 2; ++i)
        {
        cout.width(6);
            cout /*<< internal << macierz[j][i] << internal ;
        }
        cout << endl;
    }
    cout << endl;


*/

    return 0;
}
