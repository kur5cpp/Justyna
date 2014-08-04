#include <iostream>
#include <fstream>

using namespace std;

class Obiekt
{
public:
    double ddana;
    int idana;
    char cdana;
};

int main()
{
    //tworze tablice:
    Obiekt* tab[200];
    for(int i = 0; i < 200; ++i)
    {
        *(tab + i) = new Obiekt;
        (*(tab + i))->ddana = 0.01 * ((double)i + 1.0);
        (*(tab + i))->idana = i + 1;
        (*(tab + i))->cdana = (char)(i%26 + 65);
    }
    //otwieram strumien:
    fstream wpisz("Tabela.txt", ios::in | ios::out | ios::binary | ios::trunc);

    //wpisz.write( (char*)(tab), 200*sizeof(Obiekt) );//moj sposob
    //sposob z internetu:
    int c_size = sizeof(double)+sizeof(int)+sizeof(char);

        wpisz.write( (char*)&(tab), (sizeof(Obiekt))*200 );




    // zapis binarny wiec mowisz o ile bitow chcesz sie przesunac wskaznikiem:
    wpisz.seekg((173-1)*c_size, ios::beg);
    // potrzebuje wskaznika by rzutowac go do char*:
   /* double* d = new double;
    int * i = new int;
    char* c = new char;
    //wczytuje przez rzutowanie do d typu double:
    wpisz.readsome((char*)d, sizeof(double));
    wpisz.readsome((char*)i, sizeof(int));
    wpisz.readsome( c, sizeof(char));
    // odczytuje wartosc:
    cout << "double: " << *d << endl;
    cout <<  "int: " << *i << endl;
    cout << "char: " << *c << endl;

*/
    Obiekt* o = new Obiekt;
    wpisz.readsome((char*)o, sizeof(Obiekt)); // biore tutaj 16 bitow
    cout << "double: " << o->ddana << endl <<  "int: " << o->idana << endl<<"char: "  << o->cdana << endl;

    wpisz.close();
    return 0;
}
