#ifndef GRACZ_H
#define GRACZ_H
#include <iostream>

using namespace std;

class Gracz
{
    public:
        Gracz();
        Gracz(string nazwa) {login = nazwa;};
        virtual ~Gracz();
        string login;
        Plansza moja;
        Plansza wroga;
    protected:

    private:
};

#endif // GRACZ_H
