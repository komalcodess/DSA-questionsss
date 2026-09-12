#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

int isEmpty()
{
    return front == -1;
}

int isFull()
{
    return (rear + 1) % MAX == front;
}

void display()
{
    if (isEmpty())
        return;

    printf("Circular Queue : ");

    int i =front;

    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i =(i + 1) % MAX;
    }

    printf("\n");
}

void enqueue(int value)
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
        rear =(rear + 1) % MAX;
    }

    queue[rear] = value;

    display();
}

int dequeue()
{
    if (isEmpty())
    {
        printf("Queue Underflow\n");
        return -1;
    }

    int value=queue[front];

    if (front ==rear)
    {
        front =-1;
        rear =-1;
    }
    else
    {
        front =(front + 1) % MAX;
    }

    display();

    return value;
}

int getFront()
{
    if (isEmpty())
        return -1;

    return queue[front];
}

int getRear()
{
    if (isEmpty())
        return -1;

    return queue[rear];
}

int main()
{
    int choice, value;

    printf("Press: 1 to enqueue\n");
    printf("Press: 2 to dequeue\n");
    printf("Press: 3 to find front\n");
    printf("Press: 4 to find rear\n");
    printf("Press: 5 to exit\n");

    while (1)
    {
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                value = getFront();

                if (value == -1)
                    printf("Queue is empty\n");
                else
                    printf("Front : %d\n", value);

                break;

            case 4:
                value = getRear();

                if (value == -1)
                    printf("Queue is empty\n");
                else
                    printf("Rear : %d\n", value);

                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
