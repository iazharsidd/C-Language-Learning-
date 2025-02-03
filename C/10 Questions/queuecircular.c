#include <stdio.h>

#define MAX_SIZE 5

int front = -1, rear = -1;

int queue[MAX_SIZE];

void enqueue(int data)
{

    if (rear == MAX_SIZE - 1)
    {

        rear = 0;
    }
    else
    {

        rear++;
    }

    queue[rear] = data;
}

int dequeue()
{

    if (front == rear)
    {

        return -1;
    }
    else
    {

        int item = queue[front];

        front++;

        return item;
    }
}

void display()
{

    int i;

    for (i = front; i <= rear; i++)
    {

        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main()
{

    enqueue(1);

    enqueue(2);

    enqueue(3);

    enqueue(4);

    enqueue(5);

    display();

    printf("Dequeued: %d\n", dequeue());

    printf("Dequeued: %d\n", dequeue());

    enqueue(6);

    enqueue(7);

    display();

    return 0;
}
