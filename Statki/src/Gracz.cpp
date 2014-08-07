#include "Gracz.h"

Gracz::Gracz()
{
trafione_moje = 0;
}

Gracz::~Gracz()
{
    //dtor
}

Gracz::Gracz(string nazwa)
{
login = nazwa;
trafione_moje = 0;
}

