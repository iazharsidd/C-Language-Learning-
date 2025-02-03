#include <stdio.h>
int fact(int x)
{
    int f=1;
    for (int i = 1; i<=x; i++)
    {
        f=f*i;
    }
    return f;
}
int combination(int n ,int r)
{
int ncr = fact(n)/(fact (r)* fact(n-r));
return ncr;
}
int main(int argc, char const *argv[])
{
    int n;
    int r;
    printf("Enter n :");
    scanf("%d",&n);
    printf("Enter r :");
    scanf("%d",&r);
    int ncr = combination(n,r);
    printf("NCR = %d\n",ncr);
    return 0;
}
