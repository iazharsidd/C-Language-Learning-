#include <stdio.h>

int main() {
  int n;
  int array[100];
  int visited[100];

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  // Initialize the visited array to 0.
  for (int i = 0; i < n; i++) {
    visited[i] = 0;
  }

  // Read the elements of the array.
  for (int i = 0; i < n; i++) {
    printf("Enter the element at index %d: ", i);
    scanf("%d", &array[i]);
  }

  // Mark the visited elements in the visited array.
  for (int i = 0; i < n; i++) {
    if (array[i] != 0) {
      visited[array[i]] = 1;
    }
  }

  // Print the visited elements.
  for (int i = 0; i < n; i++) {
    if (visited[i] == 1) {
      printf("%d ", i);
    }
  }

  return 0;
}
