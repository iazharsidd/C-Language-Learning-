#include <stdio.h>
int main(int argc, char const *argv[])
{
     int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int count = 0;
    int j;
    for (int i = 0; i <=n-1; i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
        for (int j = 0; j<=n-1; j++)
         {
           if (arr[i]+arr[j]==x)
            count++;
        }
    }
    printf("%d",count);
    return 0;
}