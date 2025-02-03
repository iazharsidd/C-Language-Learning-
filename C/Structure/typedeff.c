#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
     typedef struct person
    {
        char name[50];
        int salary;
        int age;
    } person;
     person a;
    {
        strcpy(a.name, "Azhar");
        a.salary = 1;
        a.age = 23;
    };
    person b;
    {
        strcpy(b.name, "Daud");
        b.salary = 5;
        b.age = 30;
    };
    printf("%s\n", a.name);
    printf("%d", b.age);

    return 0;
}
