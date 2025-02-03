#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    if ((n % 5 == 0 || n % 3 == 0) && n % 15 != 0)
    {
        printf("Ok ");
    }
    else
        printf("not ok");
    return 0;
}
