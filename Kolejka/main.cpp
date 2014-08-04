#include <iostream>

using namespace std;

struct Element
{
    int wartosc;
    Element* nastepny;
};

int main()
{
    int ile, k;
    cout << "Ile liczb w kolejce? ";
    cin >> ile;
    Element* poczatek = NULL;
    Element* koniec = NULL;
    cout << "Podaj k: " << endl;
    //tworzenie kolejki
    for (int i = 0; i < ile; ++i)
    {
        cin >> k;
        wierzcholek = stworz_element(k, wierzcholek);
    }

    return 0;
}
