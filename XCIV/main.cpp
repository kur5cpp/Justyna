#include <iostream>
#include <ctype.h> // potrzebne do isdigit
using namespace std;
#include <sstream>


int main (int argc, char* argv[])
{
    cout << "program o sciezce: " << argv[0] << " ma " << argc - 1 << " argumenty" << endl;
    double* dt = new double[argc - 1];
    string* st = new string[argc - 1];
    int spr; // potrzebne do isdigit
    istringstream dowl;
    int i = 0, j = 0, l = 0;
    for( ; i < argc - 1; ++i)
    {
        dowl.str(argv[i + 1]);
        spr = dowl.peek(); // zapamietuje co jest w strumieniu
        if( isdigit(spr) ) // sprawdza czy to co jest w strumieniu to liczba
            dowl >> *(dt + j++); // jesli tak to zapisuje do tab typu double
        else
            dowl >> *(st + l++); // jesli nie to zap. do tab typu string

        if (dowl.eof())
            dowl.clear(dowl.rdstate() & ~ios::eofbit); // doche do konca danych w dowl, trzeba usunac flage eofbit
    }

    for(int i = 0; i < j; ++i)
        cout << *(dt + i) << endl;

    for(int i = 0; i < l; ++i)
        cout << *(st + i) << endl;


    return 0;
}

