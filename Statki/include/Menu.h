#ifndef MENU_H
#define MENU_H
#include <iostream>


using namespace std;

class Menu
{
    public:
        Menu();
        virtual ~Menu();
        int swicz;
        void menu_ekran_startowy();
        void menu_wybor_listy();
    protected:
    private:
};

#endif // MENU_H
