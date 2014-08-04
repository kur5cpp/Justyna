#include <iostream>

using namespace std;

int powi(int a)
{
    return 0;
}

int powi(int a, int b)
{
    return a * b;
}

int powi(int a, int b, int c)
{
    return 2*(a * b + b * c + a * c);
}

int main()
{
    int tab[10][10];
    for(int i = 0; i < 100; ++i)
        *(*(tab + i/10) + i%10) = (i/10)%2 ? (i%2 ? 0 : 1) : (i%2 ? 1 : 0);

    for(int i = 0; i < 100; ++i)
    {
        if(i%10 == 0)
            cout << endl;
        cout.width(4);
        cout << *(*tab + i);
    }
    cout << endl;

    int t[3];
    int ile = 0;
    cout << "Ile bokow chcesz podac? " << endl;
    cin >> ile;
    for(int i = 0; i < ile; ++i)
        cin >> t[i];

    switch(ile)
    {
        case 1:
        cout << powi(t[0]);
        break;
        case 2:
        cout << powi(t[0], t[1]);
        break;
        case 3:
        cout << powi(t[0], t[1], t[2]);
        break;
        default:
        cout << "Unknown command! ";
        break;
    }

    return 0;
}
