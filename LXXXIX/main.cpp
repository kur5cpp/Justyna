#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    double pi = 3.1111122222333334444455555;
    fstream zapis("Z.txt", ios::out | ios::in | ios::binary | ios::trunc);
    zapis.precision(25);
    //zapis.write((char*)&pi, sizeof(pi));
    zapis << pi;
    zapis.close();

    fstream odd("Z.txt", ios::out | ios::binary | ios::in);
    double cos;
    odd.precision(25);
    odd >> cos;
    cout.precision(25);
    cout << cos;


     //  cout << (double*)odczyt;
    //zapis.close();

    //char* temp = new char[sizeof(double)];  // wskaznik na tablice typu char ktora ma tyle el. ile bitow ma double
    //char tem[8];
   // odd.readsome(tem, sizeof(double)); // wczytujemy
   // double* moja_liczba = (double* )tem;
   // cout.precision(40);
   // cout << *moja_liczba;


    //zapisal krzaki, ale to moze byc dobrze, maja byc krzaki, ale czy dobrze odczytuje?


    /*
    //zapis.precision(30);
    zapis.write( (char*)&pi, 27); //moze to nie byc sizeof pi tylko liczba znakow w pi
    char cos[30];
    zapis.readsome(cos, 30);
    for(int i = 0; i < 30; ++i)
        cout << cos[i];
    zapis.close();
    */
    /*
    fstream odcz("Z.txt", ios::out |ios::in | ios::binary);
    double znak;
    odcz << znak;
    cout.precision(25);
    cout << fixed << znak;
    odcz.close();
    */

    //char napis[30];
   // cout  << "podaj 5 znakow" << endl;
   // cin.read(napis, 5);
   // for(int i = 0; i < 5; ++i)
   //     cout << napis[i] << endl;





    return 0;
}
//moze najpierw niech wczyta z klawiatury
// najpierw niech w ogole dobrze zapisze do pliku moze inaczej? write? znak po znaku?
