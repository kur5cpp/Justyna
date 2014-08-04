#include <iostream>

using namespace std;

class Worker
{
public:

    string first_name;
    string second_name;
    int year_of_birth;
    int age;
    void how_old_are_you()
    {
        age = 2014 - year_of_birth;
    }
};

ostream& operator<<(ostream& print, Worker const& person)
{
    print.width(10);
    print << person.first_name;
    print.width(15);
    print << person.second_name;
    print.width(5);
    print << "(" << person.year_of_birth << ")";
    print.width(7);
    print << "Age: " << person.age << endl ;
}

Worker** create_table(int& many)
{
    cout << "How many data do you want to enter?" << endl;
    cin >> many;
    cout << endl;
    Worker** staff = new Worker*[many];
    for(int i = 0; i < many; ++i)
    {
        *(staff + i) = new Worker;
        cout << "Type a first name: ";
        cin >> (*(staff + i))->first_name;
        cout << "Type a second name: ";
        cin >> (*(staff + i))->second_name;
        cout << "Type a year of birth: ";
        cin >> (*(staff + i))->year_of_birth;
        (*(staff + i))->how_old_are_you();
        cout << endl;
    }
    return staff;
}

void show(int many, Worker** staff)
{
    for(int i = 0; i < many; ++i)
        cout << **(staff + i);
}

int clear_memory(int many, Worker** table)
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

int main()
{
    string a;
   // cin.skipws;
    getline(cin, a);
    cout << a;
    /*
    int many = 0;
    Worker** crew = create_table(many);
    show(many, crew);
    return !clear_memory(many, crew);
    */
}

