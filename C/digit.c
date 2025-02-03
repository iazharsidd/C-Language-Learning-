#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("\nenter character is :");
    scanf("%c",&ch);
    if(ch>'0' && ch<='9')
    {
        printf("character is digit :%c",ch);
    }
    else
    {
        printf("character is not digit :%c",ch);
    }
    return 0;
} 
