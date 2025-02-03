#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf ("Enter The Number : ");
    scanf ("%d",&n);
    int sum = 0;
    int i=0;
    while (n!=0)
    {
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
    printf("The Sum is %d ",sum);
    return 0;
}
