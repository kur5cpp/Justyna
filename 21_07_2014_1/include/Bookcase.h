#ifndef BOOKCASE_H
#define BOOKCASE_H
#include "ISBN.h"
#include "Data_book.h"

class Bookcase
{
    public:
        Data_book** create_table(int many);
        void show(int many, Data_book** staff);
        int empty_shelf(int many, Data_book** table);

    private:
        int many;
};

#endif // BOOKCASE_H
