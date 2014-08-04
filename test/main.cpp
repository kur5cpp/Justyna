#include <iostream>
#include <stdio.h>
#include <iomanip>


using namespace std;

class wekt
{
public:
    double x, y, z;
};

class wekt_o : public wekt
{
    public:
    string opis;
};

ostream& operator<<(ostream& s_out, const wekt& w) // do wypisywania, wiec niech nie zmienia
{
    s_out << w.x << " " << w.y << " " << w.z ;
    return s_out;
}

istream& operator>>(istream& s_in, wekt& w) // musi umiec zmieniac, zeby tam w ogole cos zapiac, ALE
{                                              // & - przeciez trzeba zmienic ten obiekt!
    s_in >> w.x >> w.y >> w.z;
    return s_in;
}

ostream& operator<<(ostream& s_out, const wekt_o& w)
{
    s_out << (wekt&)w;
    s_out << endl << setw(20) <<w.opis;
    return s_out;
}

istream& operator>>(istream& s_in, wekt_o& w)
{
    s_in >> (wekt&)w;
    // cout >> endl; //wpisujesz nowa linie?
    getline(s_in, w.opis);
    return s_in;
}

int main()
{
    wekt a;
    wekt_o b;
    cout << b << endl; // wartosci przypadkowe
    cout << "b: " << endl;
    cin >> b;
    cout  <<b;


    return 0;
}
