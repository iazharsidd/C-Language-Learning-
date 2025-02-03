#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1; i <=n ; i++)
    {
        if (i%2!=0)
        {
            sum=sum+i;
        }
        else
        sum=sum-i;    
    }
         printf("The Sum of the series is : %d",sum);
    return 0;
}
