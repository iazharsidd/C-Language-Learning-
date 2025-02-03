#include <stdio.h>
int add(int a)
{
    if (a == 0)
    {
        return 0;
    }
    return a + add(a - 1);
}

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    int sum = add(a);
    printf("%d", sum);
    return 0;
}