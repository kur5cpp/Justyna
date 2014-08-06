#include "Plansza.h"

using namespace std;

Plansza::Plansza()
{
    for(int i = 0; i < 10; ++i)
    {
        for(int j = 0; j < 10; ++j)
            tab[i][j] = ' ';
    }
}

Plansza::~Plansza()
{
    //dtor
}



