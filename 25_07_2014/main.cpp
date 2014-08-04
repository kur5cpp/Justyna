#include <iostream>

using namespace std;

struct Element
{
    int wartosc;
    Element* poprzedni;
};

Element* stworz_element(int liczba, Element* wierzcholek)
{
    Element* wsk = new Element;
    wsk->wartosc = liczba;
    if(wierzcholek != NULL) wsk->poprzedni = wierzcholek;
    else wsk->poprzedni = NULL;
    return wsk;
}

void wypisz(Element* wsk)
{
    while(wsk!=NULL)
    {
        cout << wsk->wartosc << endl;
        wsk = wsk->poprzedni;
    }
}

Element* rozpakuj(int* liczba, Element* wierzcholek)
{
    while(wierzcholek!=NULL)
    {
        *liczba = wierzcholek->wartosc;  // to jest sposob jesli chcemy otrzymac wlasnie rozpakowana wartosc
        //cout << *liczba << endl;
        Element* usuwany_wsk = wierzcholek;
        wierzcholek = wierzcholek->poprzedni;
        delete usuwany_wsk;
    }
    delete wierzcholek;
    return NULL;
}

int main()
{
    int ile, k;
    cout << "Ile liczb na stosie? ";
    cin >> ile;
    Element* wierzcholek = NULL;
    cout << "Podaj k: " << endl;
    //tworzenie stosu
    for (int i = 0; i < ile; ++i)
    {
        cin >> k;
        wierzcholek = stworz_element(k, wierzcholek);
    }
    cout << endl;
    wypisz(wierzcholek);
    wierzcholek = rozpakuj(&k, wierzcholek);

    return 0;
}
