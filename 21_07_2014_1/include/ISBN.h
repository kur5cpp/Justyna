#ifndef ISBN_H
#define ISBN_H
#include "Data_book.h"
#include "Bookcase.h"


class ISBN
{
//public:
   // friend Data_book** Bookcase::create_table(int& many);

public:
    int country;
    int editor;
    int issue;
    int control_sum;
};

#endif // ISBN_H
