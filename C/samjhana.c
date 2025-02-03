#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter number");
    scanf("%d", &n);
    int flag;
    for (int i = 2; i < n; i++)
    {
        flag = 0;
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
        if (flag == 0)
        {
            printf(" %d prime number", n);
        }
        else
        {
            printf("%d not prime number ", n);
        }
    return 0;
}