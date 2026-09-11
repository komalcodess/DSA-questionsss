#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;
int size;

void create()
{
    printf("Enter size of queue: ");
    scanf("%d", &size);

    front =-1;
    rear =-1;

    printf("Queue created successfully.\n");
}

int isEmpty()
{
    return front == -1;
}

int isFull()
{
    return (rear + 1) % size == front;
}

void enqueue(int k)
{
    if (isFull())
    {
        printf("Queue Overflow!!!\n");
        return;
    }

    if (isEmpty())
    {
        front=0;
        rear= 0;
    }
    else
    {
        rear =(rear + 1) %size;
    }

    queue[rear] = k;
}

int dequeue()
{
    int value;

    if (isEmpty())
    {
        printf("Queue Underflow\n");
        return -1;
    }

    value=queue[front];

    if (front ==rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front =(front +1) % size;
    }

    return value;
}

int getFront()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return -1;
    }

    return queue[front];
}

int getRear()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return -1;
    }

    return queue[rear];
}

int main()
{
    int choice, value;

    create();

    while (1)
    {
        printf("Press 1.to EnQueue\n");
        printf("Press 2.to  DeQueue\n");
        printf("Press 3.to  IsEmpty\n");
        printf("Press 4.to  Front\n");
        printf("Press 5.to  Rear\n");
        printf("Press 6.to  Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                value = dequeue();

                if (!isEmpty() || value != -1)
                    printf("Deleted element: %d\n", value);

                break;

            case 3:
                if (isEmpty())
                    printf("Queue is empty\n");
                else
                    printf("Queue is not empty\n");
                break;

            case 4:
                value = getFront();

                if (!isEmpty())
                    printf("Front element: %d\n", value);
                break;

            case 5:
                value = getRear();

                if (!isEmpty())
                    printf("Rear element: %d\n", value);
                break;

            case 6:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

