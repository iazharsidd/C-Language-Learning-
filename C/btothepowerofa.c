#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int b;
    printf("Enter the number a : ");
    scanf("%d",&a);
    printf("Enter the number b : ");
    scanf("%d",&b);
     int c=1;
    for (int i = 1; i <=b; i++)
    {
    c=c*a;
    }
     printf("%d",c);
    return 0;
}