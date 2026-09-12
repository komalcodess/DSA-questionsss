#include <stdio.h>
#define MAX 20
void display(int *queue,int rear,int front)
{
    if (front==-1)
        return;

    for (int i =front; i <=rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

void enqueue(int *queue, int *rear, int *front, int k)
{
    if (*rear ==MAX-1)
    {
        printf("Queue is full!!!");
        return;
    }

    if (*front==-1)
        *front =0;

    (*rear)++;
    queue[*rear] =k;

    printf("Queue - ");
    display(queue, *rear, *front);
}

int dequeue(int *queue, int *rear, int*front)
{
    if (*front ==-1)
        return -1;

    int koms = queue[*front];
    (*front)++;

    if (*front >*rear)
    {
        *front = -1;
        *rear = -1;
    }

    return koms;
}

int size(int rear, int front)
{
    if (front ==-1)
        return 0;
    else{
     return rear -front + 1;
    }
}


int main()
{
    int queue[MAX];
    int front = -1;
    int rear = -1;
    int choice, k;

    printf("Press: 1 to enqueue\n");
    printf("Press: 2 to dequeue\n");
    printf("Press: 3 to calculate size\n");
    printf("Press: 4 to display the elements\n");
    printf("Press: 5 to exit\n");

    while (1)
    {
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                scanf("%d", &k);
                enqueue(queue, &rear, &front, k);
                break;

            case 2:
                k = dequeue(queue, &rear, &front);

                if (k ==-1)
                    printf("Queue is empty\n");

                break;

            case 3:
                printf("Size = %d\n", size(rear, front));
                break;
            case 4:
            display(queue, rear, front);
            break;

            case 5:
                return 0;

            default:
                printf("Invalid choice!!\n");
        }
    }

    return 0;
}


