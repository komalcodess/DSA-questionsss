#include <stdio.h>
#define MAX 10

int stack[MAX];
int top = -1;

void create()
{
    top = -1;
}

void push(int k)
{
    if (top == MAX - 1)
        return;

    stack[++top] = k;
}

void pop()
{
    if (top != -1)
        top--;
}

int size()
{
    return top + 1;
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack - ");
    for (int i =0;i <=top;i++)
        printf("%d ", stack[i]);

    printf("\n");
}

int main()
{
    int choice, k;

    printf("Press: 1 to create\n");
    printf("Enter 2 to push \n");
    printf("Enter 3 to pop \n");
    printf("Enter 4 to calculate size\n");
    printf("Enter 5 to display\n");
    printf("Enter 6 to exit\n");

    while (1)
    {
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                create();
                break;

            case 2:
                scanf("%d", &k);
                push(k);
                display();
                break;

            case 3:
                pop();
                display();
                break;

            case 4:
                printf("Size = %d\n", size());
                break;

            case 5:
                display();
                break;

            case 6:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
