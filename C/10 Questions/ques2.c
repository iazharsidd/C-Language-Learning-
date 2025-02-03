#include<stdio.h>
#include <string.h>

        int main()
{
    // Array of names
    char names[][20] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    int n = sizeof(names) / sizeof(names[0]);

    // Bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strlen(names[j]) > strlen(names[j + 1]))
            {
                // Swap names[j] and names[j+1]
                char temp[20];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    // Display sorted names
    printf("Sorted names:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}
