#include <stdlib.h>
#include "Bookcase.h"
//using namespace std;

Data_book** Bookcase::create_table(int& many)
{
    cout << "How many data do you want to enter?" << endl;
    cin >> many;
    cout << endl;
    Data_book** staff = new Data_book*[many];
    for(int i = 0; i < many; ++i)
    {
        *(staff + i) = new Data_book;
        cout << "Type a title: ";
        cin.ignore();
        getline(cin, (*(staff + i))->title);

        cout << "Type a author's first names: ";
        getline(cin, (*(staff + i))->f_a_names);

        cout << "Type a author's second name: ";
        getline(cin, (*(staff + i))->s_a_name);

        cout << "Type a ISBN number: ";
        cin >> (*(staff + i))->ISBN_number.country
            >> (*(staff + i))->ISBN_number.editor
            >> (*(staff + i))->ISBN_number.issue
            >> (*(staff + i))->ISBN_number.control_sum;

        cout << "Type a price: ";
        cin >> (*(staff + i))->price;
        char c;
        cin.get(c);
        if( c == ',')
        {   int b; cin >> b;
        (*(staff + i))->price = (*(staff + i))->price + (float)b/100;   }

        cout << "Type a release year: ";
        cin >> (*(staff + i))->release_year;

        cout << endl;
    }
    system("clear");
    return staff;
}

void Bookcase::show(int many, Data_book** staff)
{
    for(int i = 0; i < many; ++i)
        cout << **(staff + i);
}

int Bookcase::empty_shelf(int many, Data_book** table)
{
    int flag = 0;
    for(int i = 0; i < many; ++i)
    {
        delete *(table + i);
        *(table + i) = NULL;
        if(*(table + i) != NULL) flag = 1;
    }
    delete table;
    table = NULL;
    if(flag == 0 && table == NULL) return 0;
    else
        return -1;
}
