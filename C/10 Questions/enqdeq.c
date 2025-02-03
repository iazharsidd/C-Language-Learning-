#include <stdio.h>
#define MAX_SIZE 100

    int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int item)
{
    if (rear == MAX_SIZE - 1)
    {
        printf("Queue is full. Cannot enqueue.\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = item;
        printf("Enqueued %d\n", item);
    }
}

int dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }
    else
    {
        int item = queue[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
        return item;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    int item = dequeue();
    if (item != -1)
    {
        printf("Dequeued %d\n", item);
    }

    item = dequeue();
    if (item != -1)
    {
        printf("Dequeued %d\n", item);
    }

    item = dequeue();
    if (item != -1)
    {
        printf("Dequeued %d\n", item);
    }

    item = dequeue(); // Trying to dequeue from an empty queue

    return 0;
}