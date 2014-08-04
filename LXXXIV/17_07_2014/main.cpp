#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream stream("Wiersz.txt", ios::out | ios::in | ios::app);
cout << "a";
    if(!stream)
    {
        cout << "Blad otwarcia pliku!" << endl;
        return -1;
    }

    int i = 1;
    char znak[1];
    cout << "a";
    //// a)
    stream >> skipws;
    stream.seekg(ios::end);
    int rozmiar = (stream.tellg()/2);
    while(i < rozmiar )
    {

        stream.seekg(i-1, ios::beg);
        stream.get(znak, 2, ' ');
        cout << znak << " " ;

        stream.seekg(-(i+1), ios::end);
        stream.get(znak, 2, ' ');
        cout << znak << " " ;
        ++i;
    }
    //// b)
    /*
    int counter = 0;
    stream.seekg(1, ios::beg);
    while(counter<10)
    {
    znak = stream.get();
        if( znak == ' ')
            ++counter;
    }
    cout << "Spacji jest: " << counter << endl;
*/
    stream.close();



        return 0;
}



