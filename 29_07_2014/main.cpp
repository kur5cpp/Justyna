#include <iostream>

using namespace std;

class Ulamek
{
private:
    int l, m;

public:
    void f_set_m(int a )
    {
        m =a;
    }
    int f_get_m()
    {
        return m;
    }

public:
    static int licznik ;
    Ulamek()
    {
        cout << "tworze obiekt klasy ulamek po raz: " << licznik << endl;
        ++licznik;
    }
    Ulamek(int a, int b)
    {
        l = a; m = b;
        cout << "tworze obiekt klasy ulamek po raz: " << licznik << endl;
        ++licznik;
    }
};


int Ulamek::licznik = 1;


int main()
{
    Ulamek a;
    a.f_set_m(5);
    cout << a.f_get_m() << endl;
    Ulamek b(1,2);
    cout << b.f_get_m() << endl;
    return 0;
}
