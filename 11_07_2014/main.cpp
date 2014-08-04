#include <iostream>
#include <stdlib.h>


using namespace std;

int main()
{
    string tekst;
    cin >> tekst;
    int counter = 0;
    for(int i = 0; i < tekst.length(); ++i)
    {
        if( tekst[i] == 'a' && tekst[i + 1] == 'b')
            ++counter;
    }

    cout << counter;

    return 0;
}
