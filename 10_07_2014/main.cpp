#include <iostream>
#include <stdlib.h>
//#include <stdio.h>



#define ROZMIAR 10

using namespace std;

void the_number_of_first()
{
    int tab[ROZMIAR];
    int index = 0;
    for (int i = 2; index < ROZMIAR; ++i)
    {
        int flaga = 1;
        for (int j = 2; j < i; ++j)
        {
            if(i%j == 0)
                flaga = 0;
            if(flaga == 0)
                break;
        }
        if(flaga)
        {
            tab[index] = i;
            cout << tab[index] << endl;
            ++index;
        }
    }
}

bool if_prime_number(int x)
{
    bool flag = true;
    for (int j = x/2; j > 2; --j)
    {
        if(x%j == 0)
            flag = false;
        if(!flag)
            break;
    }
    return flag;
}

int max(int a, int b, int c)
{
    if(a > b && a > c) return a;
    if(b > a && b > c) return b;
    if(c > a && c > b) return c;
}

void konsola()
{
    cout << "Type numbers: " << endl;
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << endl;

    cout << "[ ]   a - return absolute value" << endl;
    cout << "[ ]   b - if the number is a prime number" << endl;
    cout << "[ ]   c - maximum number" << endl << endl;
    char choice;
    cin >> choice;

    system("clear");
    switch(choice) {
        case 'a':
        cout << "[x]   a - return absolute value" << endl;
        cout << "[ ]   b - if the number is a prime number" << endl;
        cout << "[ ]   c - maximum number" << endl << endl;
        cout << abs(a) << endl;
        break;

        case 'b':
        cout << "[ ]   a - return absolute value" << endl;
        cout << "[x]   b - if the number is a prime number" << endl;
        cout << "[ ]   c - maximum number" << endl << endl;
        if(if_prime_number(a))
            cout << "This number is a prime number." << endl;
        else
            cout << "This number isn't a prime number." << endl;
        break;

        case 'c':
        cout << "[ ]   a - return absolute value" << endl;
        cout << "[ ]   b - if the number is a prime number" << endl;
        cout << "[x]   c - maximum number" << endl;
        cout << "Max number equals: " << max(a, b, c) << endl;
        break;

        default:
        cout << "[ ]   a - return absolute value" << endl;
        cout << "[ ]   b - if the number is a prime number" << endl;
        cout << "[ ]   c - maximum number" << endl;
        cout << "Unknown command!" << endl;
    }
}

void ulamek(int& licznik, int& mianownik)
{
    for(int i = (licznik < mianownik ? licznik : mianownik); i > 1; --i)
    {
        if(licznik%i == 0 && mianownik%i == 0)
        {
            licznik = licznik/i;
            mianownik = mianownik/i;
        }
    }
}

void view(int tab[], int rozmiar)
{
    for(int i = 0; i < rozmiar; ++i)
    {
        if(i%10 == 0) cout << endl;
        cout << tab[i] << "\t";
    }
    cout << endl;
}

void dekr(int tab[], int rozmiar)
{
    for(int i = 0; i < rozmiar; ++i)
        --tab[i];
}

bool sym(int tab[], int rozmiar)
{
    bool flag = true;
    for(int i = 0; i < rozmiar/2 ; ++i)
    {
        if(tab[i] != tab[rozmiar - i - 1])
            flag = false;
    }
    return flag;
}

void przesun_1(int tab[], int rozmiar)
{
    int buff = tab[rozmiar - 1];
    for(int i = rozmiar - 1; i > 0 ; --i)
        tab[i] = tab[i - 1];
    tab[0] = buff;
}

void przesun_2(int tab[], int rozmiar)
{
    int buff1 = tab[rozmiar - 2];
    int buff2 = tab[rozmiar - 1];
    for(int i = rozmiar - 1; i > 1 ; --i)
        tab[i] = tab[i - 2];
    tab[0] = buff1;
    tab[1] = buff2;
}

int main()
{
    srand(time(NULL));

    int tab1[10] = {0, 1, 2, 3, 4, 4, 3, 2, 1, 0};

    int tab2[20];
    for(int i = 0; i < 20; ++i)
    {
        tab2[i] = rand()%30;
    }

    int tab3[30];
    for(int i = 0; i < 30; ++i)
    {
        tab3[i] = rand()%100;
    }

    przesun_2(tab1, 10);
    view(tab1, 10);


    return 0;
}


