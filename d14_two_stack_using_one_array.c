#include <stdio.h>

#define MAX 10

int stack[MAX];
int top1 = -1;
int top2 = MAX;

void push1(int value)
{
    if (top1+1 == top2)
    {
        printf("Stack Overflow!!!\n");
        return;
    }

    top1++;
    stack[top1] = value;
}

void push2(int value)
{
    if (top1+1 ==top2)
    {
        printf("Stack Overflow\n");
        return;
    }

    top2--;
    stack[top2] = value;
}

int pop1()
{
    if (top1==-1)
    {
        printf("Stack 1 is Underflow\n");
        return -1;
    }

    return stack[top1--];
}

int pop2()
{
    if (top2 ==MAX)
    {
        printf("Stack 2 Underflow\n");
        return -1;
    }

    return stack[top2++];
}

void display1()
{
    int i;

    printf("Stack 1: ");

    for (i =top1; i >=0; i--)
        printf("%d ", stack[i]);

    printf("\n");
}

void display2()
{
    int i;

    printf("Stack 2: ");

    for (i =top2; i <MAX; i++)
        printf("%d ", stack[i]);

    printf("\n");
}


int main()
{
    int choice, value;

    while (1)
    {
        printf("\nPress 1. to Push in Stack 1");
        printf("\nPress 2. to Push in Stack 2");
        printf("\nPress 3. to Pop from Stack 1");
        printf("\nPress 4. to Pop from Stack 2");
        printf("\nPress 5. to Display Stack 1");
        printf("\nPress 6. to Display Stack 2");
        printf("\nPress 7. to Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push1(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                push2(value);
                break;

            case 3:
                value = pop1();

                if (top1 != -1)
                    printf("Popped element: %d\n", value);

                break;

            case 4:
                value = pop2();

                if (top2 != MAX)
                    printf("Popped element: %d\n", value);

                break;

            case 5:
                display1();
                break;

            case 6:
                display2();
                break;

            case 7:
                return 0;

            default:
                printf("Invalid choice\n");
                return 0;
        }
    }
}



