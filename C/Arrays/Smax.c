#include<stdio.h>
#include<limits.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the size of Array : ");
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < a; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
    }
    for (int  i = 0; i < a; i++)
    {
        if (smax<arr[i]&&arr[i]!=max)
        {
            smax = arr[i];
        }
    }
    printf("%d", smax);
    return 0;
}
