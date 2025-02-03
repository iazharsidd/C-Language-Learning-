#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int min;
    for (int i = 0; i <=n-1; i++)
    {
     min=arr[0];
     scanf("%d",&arr[i]);
     if (min>arr[i])
        min=arr[i];
    }
    printf("%d ",min);
    return 0;
}