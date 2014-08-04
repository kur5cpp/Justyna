#include <iostream>

using namespace std;

int main()
{
    int w, k;

    cout << (w = !(k=1) ? k++ : 1.5 * k) ;
    return 0;
}
