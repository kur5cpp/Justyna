#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class K
{
        double d;
        int i;
        char c;
public:
        void przypisz(double dd, int ii, char cc)
        {
                d = dd;
                i = ii;
                c = cc;
        }

        void zapisz(fstream &gdzie);
};

void K::zapisz(fstream &gdzie)
{
        //cout << "Bedziemy zapisywac na pozycji: " << gdzie.tellp() << endl;
        gdzie.write((char *)&d,sizeof(double));
        gdzie.write((char *)&i,sizeof(int));
        gdzie.write((char *)&c,sizeof(char));
}

int main()
{
        //cout << "Rozmiar danych = " << (sizeof(double)+sizeof(int)+sizeof(char));
        K tab[200];

        //Wypelnienie tablicy
        for(int i = 0; i < 200; i++)
        {
                tab[i].przypisz(0.01*(i+1), 1 * (i+1),(char)('A' + i));
        }

        fstream plik;
        plik.open("tablica.tmp",ios::in|ios::out|ios::binary|ios::trunc);

        for(int i = 0; i < 200; i++)
        {
                tab[i].zapisz(plik);
        }

        //cout << "Wskaznik na pozycji: " << plik.tellp()<< ", rozmiar tab = " << sizeof(tab) << "rozmiar zmiennych: " << 200*sizeof(double)+200*sizeof(int)+200*sizeof(char);

        cout << "Ktory numer elementu tablicy chcesz poznac?"<<endl;
        short numer;
        cin >> numer;

        plik.seekg((numer-1) * (sizeof(double)+sizeof(int)+sizeof(char)));
        //cout << "Odczytujemy z pozycji: " << plik.tellg() << endl;
        double * wd = new double;
        int * wi = new int;
        char * wc = new char;
        plik.read((char*)wd,sizeof(double));
        plik.read((char*)wi,sizeof(int));
        plik.read(wc,sizeof(char));
        cout << "Zawartosc obiektu nr. " << numer << ":\td = " << *wd << ", i = " << *wi << ", c = " << *wc << endl;


        return 0;
}
