#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the numer : ");
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        if (n%3==3)
        {
            printf("Yes Number is divisible by 5 and 3");
        }
        else
        printf("Yes Number is divisible by 5 but not 3");
    }
    else
    {
        printf("Condition not satisfied");
    }

    return 0;
}
