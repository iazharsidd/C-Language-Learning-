#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i=1,sum=0;
    printf("Enter a poitive integer: ");
    scanf("%d",&n);
    while (i <= n)
    {
        sum =sum+i;
        i++;
    }
    printf("The sum of numbers from 1 to %d is %d.",n,sum);
    return 0;
}
