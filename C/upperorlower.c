#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("enter you character:-");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
    printf("Upper case");
    }
    if (ch>='a' && ch<='z')
    {
        printf("lower case");
    }
    return 0;
}
