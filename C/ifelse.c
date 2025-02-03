#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter your number:");
    scanf("%d",&a);
    if (a>0)
    {
        printf("positive\n"); 
        if (a%2==0)
        {
            printf("number is even\n");
        }
        else
        printf("odd number\n"); 
    }
    else
    printf("negative");
    
    return 0;
}
