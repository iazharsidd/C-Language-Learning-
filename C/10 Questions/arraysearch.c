#include <stdio.h>
int main() {
    int size, i, searchElement;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
     int arr[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    int p = -1;
    for (i = 0; i < size; i++) {
        if (arr[i] == searchElement) {
            p = i;
            break;
        }
    }
    if (p!= -1) {
        printf("%d found at position %d.\n", searchElement, p);
    } else {
        printf("%d not found in the array.\n", searchElement);
    }
    return 0;
}