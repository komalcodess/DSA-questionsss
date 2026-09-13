#include <stdio.h>

#define MAX 20

int q1[MAX], q2[MAX];
int f1 =-1, r1 =-1;
int f2 = -1, r2 =-1;

void push(int k)
{
    int i;

    if (f2 ==-1)
        f2 =0;

        r2++;
    q2[r2]= k;

    if (f1 !=-1)
    {
        for (i =f1; i<= r1;i++)
            q2[++r2] = q1[i];
    }

    f1 =0;
    r1 = r2;

    for (i =0; i <=r2; i++)
        q1[i] = q2[i];

    f2 = -1;
    r2 = -1;

    printf("Stack - ");

    for (i =r1; i >=f1;i--)
        printf("%d ", q1[i]);

    printf("\n");
}

int pop()
{
    int val;

    if (f1 ==-1)
    {
        printf("Stack is empty\n");
        return -1;
    }

    val = q1[f1];

    f1++;

    if (f1 >r1)
    {
        f1 = -1;
        r1 = -1;
    }

    return val;
}

int top()
{
    if (f1 ==-1)
    {
        printf("Stack is empty\n");
        return -1;
    }

    return q1[f1];
}

void display()
{
    int i;

    if (f1 ==-1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack - ");

    for (i=r1; i >=f1; i--)
    {
        printf("%d ", q1[i]);
    }

    printf("\n");
}

int main()
{
    int choice, k, i;

    printf("Press 1 to push\n");
    printf("Press 2 to pop\n");
    printf("Press 3 to display\n");
    printf("Press 4 to get top\n");
    printf("Press 5 exit\n");


    while (1)
    {
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                scanf("%d", &k);
                push(k);
                break;

            case 2:
                k = pop();

                if (k != -1)
                {
                    printf("Popped element - %d\n", k);

                    printf("Stack after popping - ");

                    if (f1 == -1)
                    {
                        printf("Empty");
                    }
                    else
                    {
                        for (i = r1; i >= f1; i--)
                            printf("%d ", q1[i]);
                    }

                    printf("\n");
                }

                break;

            case 3:
                display();
                break;

            case 4:
                k = top();

                if (k != -1)
                    printf("Top element - %d\n", k);

                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

