#include <iostream>
#include "ISBN.h"
#include "Data_book.h"
#include "Bookcase.h"
#include "Overloaded_operators"
using namespace std;

ostream& operator<<(ostream& print, ISBN const& number)
{
    print << number.country << "-" << number.editor << "-" << number.issue << "-" << number.control_sum;
}

ostream& operator<<(ostream& print, Data_book const& book)
{
    print << endl;
    print.width(15);
    print << left << "Title:";
    print << "\"" << book.title << "\"" << endl;
    print.width(15);
    print << left << "Author:";
    print << book.s_a_name << ", " << book.f_a_names << endl;
    print.width(15);
    print << left << "ISBN number:" ;
    print << book.ISBN_number << endl;
    print.width(15);
    print << left << "Price:" ;
    print.precision(2);
    print << fixed << book.price << " zl" << endl;
    print.width(15);
    print << left << "Release year:";
    print << book.release_year << endl;
}


int main()
{
    Bookcase private_shelf;
    Data_book** library = private_shelf.create_table(many);
    private_shelf.show(many, library);
    return !private_shelf.empty_shelf(many, library);
}
