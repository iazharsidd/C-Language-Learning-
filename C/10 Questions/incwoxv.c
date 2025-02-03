#include <stdio.h>
void increasing(int n)
{   
    int x=1;
    if (x==n)
    {
        return;
    }
    increasing(n+1);
    printf("%d",x);
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
