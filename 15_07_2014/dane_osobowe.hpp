using namespace std;

struct dane_osobowe
{
public:
    int oblicz_wiek(int pesel);
    void wyswietl_dane(dane_osobowe osoba);

private:
    string imie;
    string nazwisko;
    int wiek;
    int pesel;
};
