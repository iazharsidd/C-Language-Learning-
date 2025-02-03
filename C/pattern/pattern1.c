#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n ;
    printf("Enter The Number : ");
    scanf("%d",&n);
for (int i = 0; i < 5; i++)
{
    for (int j = 0;  j < n;  j++)
    {
        printf("*");
    }
    printf("\n");
}
    return 0;
}