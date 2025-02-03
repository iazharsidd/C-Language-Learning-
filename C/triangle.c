#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;
    printf("Enter Side a : ");
    scanf("%d", &a);
    printf("Enter Side b : ");
    scanf("%d", &b);
    printf("Enter Side c : ");
    scanf("%d", &c);
    if (a + b > c && b + c > a && a + c > c)
    {
        printf("Yes its a Triangle ");
    }

    return 0;
}
