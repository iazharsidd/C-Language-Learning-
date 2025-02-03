#include <stdio.h>
int sum(int a)
{
    if (a == 0)
    {
        return 0;
    }
    int l = a % 10;
    return l + sum(a / 10);
}
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
     int s = sum(a);
     printf("s=%d", s);
     return 0;
}