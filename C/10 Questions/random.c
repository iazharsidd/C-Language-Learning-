#include <stdio.h>

#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

int isFull()
{
    return (front == (rear + 1) % MAX_SIZE);
}

int isEmpty()
{
    return (front == -1 && rear == -1);
}

void enqueue(int data)
{
    if (isFull())
    {
        printf("Queue is full. Cannot enqueue %d.\n", data);
        return;
    }

    if (isEmpty())
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX_SIZE; // Wrap around if needed
    }

    queue[rear] = data;
    printf("Enqueued: %d\n", data);
}

int dequeue()
{
    int data;

    if (isEmpty())
    {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1; // You can choose a different value to indicate an error
    }

    data = queue[front];

    if (front == rear)
    {
        front = rear = -1; // Queue is empty after this dequeue
    }
    else
    {
        front = (front + 1) % MAX_SIZE; // Wrap around if needed
    }

    printf("Dequeued: %d\n", data);
    return data;
}

void displayQueue()
{
    int i;
    if (isEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    for (i = front; i != rear; i = (i + 1) % MAX_SIZE)
    {
        printf("%d, ", queue[i]);
    }
    printf("%d\n", queue[i]); // Print the last element
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6); // Queue is full
    displayQueue();

    dequeue();
    dequeue();
    displayQueue();

    enqueue(7);
    displayQueue();

    return 0;
}