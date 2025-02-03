#include <stdio.h>

int findMissing(int arr[], int n)
{
    int i, total;
    total = (n + 1) * (n + 2) / 2;
    for (i = 0; i < n; i++)
        total -= arr[i];
    return total;
}
int main()
{
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the %d elements of array:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int missing = findMissing(arr, n);
    printf("The missing element in the array is: %d", missing);
    return 0;
}