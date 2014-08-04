#include <iostream>
#include <cstdlib>
#include "dane_osobowe.hpp"

using namespace std;


int main()
{
    srand(time(NULL));
    int rozmiar_tablicy;
    double* tablica_liczb;
    cout << "Ile liczb chcesz wprowadzic?" << endl;
    cin >> rozmiar_tablicy;
    int licznik = 0;
    if( tablica_liczb = (double*)calloc(rozmiar_tablicy, sizeof(double)) );
    {
        for (int i = 0; i < rozmiar_tablicy; ++i)
        {
            int c = rand()%101 - 50;
            *(tablica_liczb + i) = ( c < 0 ? 0 : c ) ;
            if(*(tablica_liczb + i) > 0) ++licznik;
            cout << *(tablica_liczb + i) << "\t";
        }
        cout << endl << "licznik: " << licznik << endl;
        free(tablica_liczb);

    }


    return 0;
}
