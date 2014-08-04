#include <iostream>
using namespace std;
#include <sstream>
#include <iomanip>

string b_znaki(string wej)
{
    int poz;
    while( (poz = wej.find(' ')) != string::npos )
        wej[poz] = '_';
    return wej;
}

void raport(int nr_probki, int l_masowa, string izotop)
{
    if (izotop.find(' ') != string::npos)
        izotop = b_znaki(izotop);

    stringstream nazwa;
    nazwa << "Raport_" << setfill('0') << setw(4) << nr_probki << "_"
          <<  setfill('0') << setw(3) << l_masowa << "_" << izotop << ".txt";
    cout << nazwa.str();

    fstream zapisz(nazwa.c_str(), ios::in  ios::trunc);
    zapisz << "cos tam" << endl;
// utworz plik o takiej nazwie
// wpisz jakies tekst do pliku
// zamknij plik? tak!
//ma zwracac int
}

int main()
{
    raport(23, 3, "siarka b c f");
    cout << endl;
    raport(999, 7, "azot nylonku potasu");

    // sprawdz czy pojawily sie takie pliki i czy nazwy sa zgodne z argumentami
    return 0;
}
