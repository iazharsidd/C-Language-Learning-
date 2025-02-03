#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100 

int stack[MAX_SIZE]; 
int top = -1;        


void push(int value)
{
    if (top >= MAX_SIZE - 1)
    {
        printf("Stack Overflow! Cannot push %d onto the stack.\n", value);
    }
    else
    {
        stack[++top] = value;
        printf("%d pushed onto the stack.\n", value);
    }
}

int pop()
{
    if (top < 0)
    {
        printf("Stack is empty. Cannot pop.\n");
        return -1;
    }
    else
    {
        int poppedValue = stack[top--];
        return poppedValue;
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            value = pop();
            if (value != -1)
            {
                printf("Popped element: %d\n", value);
            }
            break;
        case 3:
            printf("Exiting the program.\n");
            return 0;
        default:
            printf("Invalid choice. Please choose 1, 2, or 3.\n");
        }
    }

    return 0;
}
