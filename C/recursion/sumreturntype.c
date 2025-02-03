#include <stdio.h>
int sum (int n)
{
    if(n==0) return 0;
    int s = n+sum(n-1);
    return s ;
}
int main(int argc, char const *argv[])
{
    int n;
    printf ("Enter the number : ");
    scanf("%d",&n);
    int s = sum(n);
    printf("%d",s);
    return 0;
}
