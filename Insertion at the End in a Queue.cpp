#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is full!\n");
    }
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;
        printf("Inserted: %d\n", value);
    }
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);

        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    return 0;
}