#include <iostream>
#include <stdio.h>

using namespace std;

struct Student
{
    string n;
    string i;
    int w;
};

int main()
{
    FILE* strumien;
    Student baza[2];
    Student marta;
    marta.n = "Nowak";
    marta.i = "Marta";
    marta.w = 22;
    Student adam;
    adam.n = "Kowalski";
    adam.i = "Adam";
    adam.w = 67;
    baza[0] = marta;
    baza[1] = adam;
    if((strumien=fopen("test.bin", "wb"))!=NULL)
    {
        fwrite(baza, sizeof(Student), 2, strumien);
        fclose(strumien);
    }

    if((strumien=fopen("test.txt", "wt"))!=NULL)
    {
        for(int i =0; i < 2; ++i)
            fprintf(strumien, "%s %s %d \n", baza[i].n.c_str(), baza[i].i.c_str(), baza[i].w);
        fclose(strumien);
    }




return 0;
}
