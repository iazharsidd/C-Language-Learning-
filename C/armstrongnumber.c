#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n ,num ,a=0;   
    printf("Enter A number:-");
    scanf("%d",&n);
    num=n;
    while (n!=0)
    {
        int r=n%10;
        a= a+r*r*r;
        n=n/10;
    }
    if (a==num)
    {
        printf("Armtrong");
    }
    else
    printf("not armstrong");
    return 0;
}