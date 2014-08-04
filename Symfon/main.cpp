#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
fstream sio("plik.txt", ios::out | ios::in | ios::trunc );
string wpisz = "abcd dcba" ;
sio << wpisz;
char wyraz[20]; //ograniczenie ilosci!!
string pobierz;
sio.seekg(0);
sio.getline( wyraz, 20, ' ');
cout << wyraz;
sio.getline( wyraz, 20, ' ');
cout << wyraz;
    return 0;
}
