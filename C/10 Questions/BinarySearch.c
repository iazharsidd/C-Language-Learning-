#include <stdio.h>

int binarySearch(int arr[], int size, int searchElement)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == searchElement)
        {
            return mid;
        }

        if (arr[mid] < searchElement)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int size, i, searchElement;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the sorted array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    int result = binarySearch(arr, size, searchElement);

    if (result != -1)
    {
        printf("%d found at position %d.\n", searchElement, result);
    }
    else
    {
        printf("%d not found in the array.\n", searchElement);
    }

    return 0;
}