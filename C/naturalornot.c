#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the Number :- ");
    scanf("%d",&a);
    if (a>0)
    {
        printf("Natural number");
    }
    else
    {
    printf("Whole Number");
    }
    return 0;
}
