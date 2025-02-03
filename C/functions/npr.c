#include<stdio.h>
int fact( int x)
{
int fact =1;
for (int i = 1; i <=x; i++)
    fact = fact*i;
    return fact;
}
int main(int argc, char const *argv[])
{
    int n;
    int r;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    int npr = fact(n)/fact(n-r);
    printf("%d ",npr);
    return 0;
}
