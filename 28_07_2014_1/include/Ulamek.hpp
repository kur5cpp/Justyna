#ifndef ULAMEK_H
#define ULAMEK_H

class Ulamek
{
public:
    Ulamek();
    virtual ~Ulamek();
    int licznik;
    int mianownik;
    void odwrotnosc();
    void wyswietl();
    void mnoz(int liczba);
    void dodaj(Ulamek pierwszy, Ulamek drugi);
    void zwieksz_o_ulamek(Ulamek drugi);
protected:
private:
};

#endif // ULAMEK_H


