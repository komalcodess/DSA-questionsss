#include <stdio.h>

#define MAX 20

int queue[MAX];
int stack[MAX];

int front =-1, rear =-1;
int top =-1;

void insert(int k)
{
    if (rear ==MAX-1)
    {
        printf("Queue is full\n");
        return;
    }

    if (front ==-1)
        front =0;

    rear++;
    queue[rear] = k;
}

void reverseQueue()
{
    int i;

    while (front <=rear)
    {
        top++;
        stack[top] = queue[front];

        front++;
    }

    front =0;
    rear =-1;

    while (top >=0)
    {
        rear++;
        queue[rear] = stack[top];

        top--;
    }
}

void display()
{
    int i;

    for (i =front; i <=rear; i++)
        printf("%d ", queue[i]);

    printf("\n");
}

int main()
{
    int choice, k;

    printf("Press 1 to insert\n");
    printf("Press 2 to exit\n");

    while (1)
    {
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                scanf("%d", &k);
                insert(k);
                break;

            case 2:
                printf("Initial Queue : ");
                display();

                reverseQueue();

                printf("Reverse Queue : ");
                display();

                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    
}

