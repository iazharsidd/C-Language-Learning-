#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int max;
    for (int i = 0; i <=n-1; i++)
    {
     max=arr[0];
     scanf("%d",&arr[i]);
     if (max<arr[i])
        max=arr[i];
    }
    printf("%d ",max);
    return 0;
}
