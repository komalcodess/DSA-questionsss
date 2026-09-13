#include <stdio.h>

#define MAX 20

int deque[MAX];
int front =-1, rear =-1;

int isEmpty()
{
    if (front ==-1)
        return 1;

    return 0;
}

int isFull()
{
    if ((front ==0 && rear ==MAX-1) || (front ==rear+1))
        return 1;

    return 0;
}

void insertFront(int k)
{
    if (isFull())
    {
        printf("Deque is full\n");
        return;
    }

    if (isEmpty())
    {
        front =0;
        rear =0;
    }
    else if (front ==0)
    {
        front =MAX-1;
    }
    else
    {
        front--;
    }

    deque[front] = k;
}

void insertEnd(int k)
{
    if (isFull())
    {
        printf("Deque is full\n");
        return;
    }

    if (isEmpty())
    {
        front =0;
        rear =0;
    }
    else if (rear ==MAX-1)
    {
        rear =0;
    }
    else
    {
        rear++;
    }

    deque[rear] = k;
}

int deleteFront()
{
    int val;

    if (isEmpty())
    {
        printf("Deque is empty\n");
        return -1;
    }

    val = deque[front];

    if (front ==rear)
    {
        front =-1;
        rear =-1;
    }
    else if (front ==MAX-1)
    {
        front =0;
    }
    else
    {
        front++;
    }

    return val;
}

int deleteEnd()
{
    int val;

    if (isEmpty())
    {
        printf("Deque is empty\n");
        return -1;
    }

    val = deque[rear];

    if (front ==rear)
    {
        front =-1;
        rear =-1;
    }
    else if (rear ==0)
    {
        rear =MAX-1;
    }
    else
    {
        rear--;
    }

    return val;
}

void printFront()
{
    int i;

    if (isEmpty())
    {
        printf("Deque is empty\n");
        return;
    }

    printf("Queue from front - ");

    i =front;

    while (1)
    {
        printf("%d ", deque[i]);

        if (i ==rear)
            break;

        i++;

        if (i ==MAX)
            i =0;
    }

    printf("\n");
}

void printEnd()
{
    int i;

    if (isEmpty())
    {
        printf("Deque is empty\n");
        return;
    }

    printf("Queue from end - ");

    i =rear;

    while (1)
    {
        printf("%d ", deque[i]);

        if (i ==front)
            break;

        i--;

        if (i <0)
            i =MAX-1;
    }

    printf("\n");
}

int main()
{
    int choice, k;

    printf("Press 1 to insert at front\n");
    printf("Press 2 to insert at end\n");
    printf("Press 3 to delete from front\n");
    printf("Press 4 to delete from end\n");
    printf("Press 5 to exit\n");

    while (1)
    {
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                scanf("%d", &k);
                insertFront(k);
                printFront();
                printEnd();
                break;

            case 2:
                scanf("%d", &k);
                insertEnd(k);
                printFront();
                printEnd();
                break;

            case 3:
                k = deleteFront();

                if (k !=-1)
                {
                    printf("Element deleted from front - %d\n", k);
                    printFront();
                    printEnd();
                }

                break;

            case 4:
                k = deleteEnd();

                if (k !=-1)
                {
                    printf("Element deleted from end - %d\n", k);
                    printFront();
                    printEnd();
                }

                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

