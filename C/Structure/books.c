#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    struct books
    {
        int noOfPages;
        float price;
        char name[50];
    };
    struct books secretSeven;
    {
        strcpy(secretSeven.name, "Secret Seven");
        secretSeven.noOfPages = 530;
        secretSeven.price = 190.5;    
    };
    struct books deepWork;
    {
        strcpy(deepWork.name, "Deep Work");
        deepWork.noOfPages = 530;
        deepWork.price = 150;
    };
    printf("%d\n", secretSeven.noOfPages);
    printf("%f\n", secretSeven.price);
    printf("%s\n", secretSeven.name);
    return 0;
}
