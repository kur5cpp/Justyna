#ifndef DATA_BOOK_H
#define DATA_BOOK_H
#include <iostream>
#include "ISBN.h"
#include "Bookcase.h"
using namespace std;

class Data_book
{
    public:
       // Data_book** create_table(int& many);
       // void show(int many, Data_book** staff);
       // int empty_shelf(int many, Data_book** table);

    //private:
        string title;
        string f_a_names;
        string s_a_name;
        ISBN ISBN_number;
        float price;
        int release_year;
};

#endif // DATA_BOOK_H
