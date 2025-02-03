#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n , rev = 0, rem;
    printf("Enter a positive integer : ");
    scanf("%d",&n);
    while (n>0)
    {
    rem = n%10;
    rev = rev*10+rem;
    n=n/10;
    }
    printf("The reverse is %d.",rev);
    return 0;
}
