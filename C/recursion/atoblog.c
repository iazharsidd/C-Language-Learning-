#include <stdio.h>
int power (int a, int b )
{
    if(b==0)
    return 1;
    int p = power(a,b/2);
    if (b%2==0)
    return p*p;
    else
    return p*p*a;
}
int main(int argc, char const *argv[])
{
    int a;
    printf("Enetr the number : ");
    scanf ("%d",&a);
    int b;
    printf("Enetr the power : ");
    scanf ("%d",&b);
    int pow = power(a,b);
    printf("%d",pow);
    return 0;
}
