 
#include <stdio.h>

#define MAX 20

int s1[MAX], s2[MAX];
int top1 =-1, top2 =-1;

void enqueue(int k)
{
    int i;

    top1++;
    s1[top1] = k;

    printf("Queue - ");

    for (i =0; i <=top1; i++)
        printf("%d ", s1[i]);

    printf("\n");
}

int dequeue()
{
    int i, val;

    if (top1 ==-1)
    {
        printf("Queue is empty\n");
        return -1;
    }

    top2 =-1;

    for (i =top1; i >=0; i--)
    {
        top2++;
        s2[top2] = s1[i];
    }

    val = s2[top2];

    top2--;

    top1 =-1;

    for (i =top2; i >=0; i--)
    {
        top1++;
        s1[top1] = s2[i];
    }

    return val;
}

int front()
{
    int i;

    if (top1 ==-1)
    {
        printf("Queue is empty\n");
        return -1;
    }

    top2 =-1;

    for (i =top1; i >=0; i--)
    {
        top2++;
        s2[top2] = s1[i];
    }

    return s2[top2];
}

void display()
{
    int i;

    if (top1 ==-1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue - ");

    for (i =0; i <=top1; i++)
        printf("%d ", s1[i]);

    printf("\n");
}

int main()
{
    int choice, k;

    printf("Press 1 to enqueue\n");
    printf("Press 2 to dequeue\n");
    printf("Press 3 to display\n");
    printf("Press 4 to get front\n");
    printf("Press 5 to exit\n");

    while (1)
    {
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                scanf("%d", &k);
                enqueue(k);
                break;

            case 2:
                k = dequeue();

                if (k != -1)
                {
                    printf("Element deleted is - %d\n", k);

                    printf("Queue after deletion- ");
                    display();
                }

                break;

            case 3:
                display();
                break;

            case 4:
                k = front();

                if (k != -1)
                    printf("Front element - %d\n", k);

                break;

            case 5:
            return 0;
            defalt:
            printf("Invalidd choice");
            return 0;

        }}
    }

