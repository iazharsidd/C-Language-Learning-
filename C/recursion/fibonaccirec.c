#include <stdio.h>
int fibo(int n )
{
    if(n<=2)
    return 1;
    return fibo(n-1)+ fibo(n-2);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number  : ");
    scanf ("%d",&n);
    int f = fibo(n);
    printf("%d",f);
    return 0;
}
