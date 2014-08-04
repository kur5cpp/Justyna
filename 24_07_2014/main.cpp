#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream plik("zabawa.txt", ios::in | ios::out);
    cout << "poz tellg 1 ?   " << plik.tellg() << endl;
    cout << "poz tellp 10 ?   " << plik.tellp() << endl;
    cout << plik.get();
    plik.close();
    return 0;
}
