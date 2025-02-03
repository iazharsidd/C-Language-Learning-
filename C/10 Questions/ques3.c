#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the size of array : ");
    scanf("%d", &a);
    int arr[a];
    printf("Unsorted Array : ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a - 1; i++)
    {
        int min = INT_MAX;
        int ind = -1;
        for (int j = i; j <= a - 1; j++)
        {
            if (min < arr[j])
            {
                min = arr[j];
                ind = j;
            }
        }
        int temp = arr[ind];
        arr[ind] = arr[i];
        arr[i] = temp;
    }
    printf("\nSorted Array : ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}