#ifndef ZESPOL_H
#define ZESPOL_H


class Zespol
{
    public:
        void wyswietl();
        Zespol();
        Zespol(int a, int b);
        virtual ~Zespol();

    private:
        float r;
        float u;
};

#endif // ZESPOL_H
