#include <iostream>

using namespace std;

int licznik()
{
    static int j = 0;
    return ++j;
}



int main()
{cout << "Petla pierwsza: " << endl;
    for(int i = 0; i < 3; ++i)
    {

    cout << "Licznik petli " << i <<endl;
    cout << "Wartosc zmiennej statycznej " << licznik() << endl;
    }

    cout << endl;
cout << "Petla druga: " << endl;
    for(int i = 0; i < 3; ++i)
    {

    cout << "Licznik petli " << i <<endl;
    cout << "Wartosc zmiennej statycznej " << licznik() << endl;
    }




        return 0;
}
