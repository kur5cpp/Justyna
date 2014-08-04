#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream plik("Data.txt", ios::out | ios::in | ios::app);
    fstream zapis("Zdata.txt", ios::out | ios::in | ios::trunc);
    //d
    string wers;
    char c;
    plik.seekg(-2, ios::end);
    int rozmiar = plik.tellg();
    plik.seekg(0, ios::beg);
    int i = 0;
    while( (c = plik.get())  != EOF )
    {
        plik.seekg(-(i + 2), ios::end);
        if ( (c = plik.peek()) == '\n')
        {
            plik.seekg(-(i + 1), ios::end); //lub plik.ignore();
            getline(plik, wers);
            zapis << wers << endl;
        }
        if (i == rozmiar)
        {
            getline(plik, wers);
            zapis << wers ;
        }
        ++i;
        plik.seekg(-(i + 2), ios::end);
    }

    //e




    return 0;
}
