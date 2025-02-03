#include <stdio.h>
void increasing (int n)
{
    if (n==0) 
    return;
    increasing(n-1);
    printf("%d\n",n);
    return;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    increasing(n);
    return 0;
}