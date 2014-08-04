#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //tworze tablice:
    double tab[200];
    for(int i = 0; i < 200; ++i)
        tab[i] = 0.01 * ((double)i + 1.0);
    //otwieram strumien:
    fstream wpisz("Tabela.txt", ios::in | ios::out | ios::binary | ios::trunc);
    //rzutuje tablice i mowie jaki bedzie miala ona rozmiar:
    wpisz.write( (char*)(tab), 200*sizeof(double) );
    // zapis binarny wiec mowisz o ile bitow chcesz sie przesunac wskaznikiem:
    wpisz.seekg((8-1)*sizeof(double), ios::beg);
    // potrzebuje wskaznika by rzutowac go do char*:
    double* d = new double;
    //wczytuje przez rzutowanie do d typu double:
    wpisz.readsome((char*)d, sizeof(double));
    // odczytuje wartosc:
    cout << *d;

    wpisz.close();
    return 0;
}
