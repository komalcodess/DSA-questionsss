#include <stdio.h>

#define MAX 10

int stack[MAX];
int top1 = -1;
int top2 = MAX;

void push1(int value)
{
    if (top1+1 ==top2)
    {
        printf("Stack Overflow!!!\n");
        return;
    }

    top1++;
    stack[top1]=value;
}

void push2(int value)
{
    if (top1 +1 ==top2)
    {
        printf("Stack Overflow!!!\n");
        return;
    }

    top2--;
    stack[top2] =value;
}

int pop1()
{
    if (top1 ==-1)
        return -1;

    return stack[top1--];
}

int pop2()
{
    if (top2 ==MAX)
        return -1;

    return stack[top2++];
}

void display1()
{
    printf("Stack 1: ");

    for (int i =0;i<= top1; i++)
    {
        printf("%d ", stack[i]);
    }

    printf("\n");
}

void display2()
{
    printf("Stack 2: ");

    for (int i = MAX -1; i>=top2; i--)
    {
        printf("%d ",stack[i]);
    }

    printf("\n");
}

int main()
{
    int choice, value;

    // Menu displayed only once
    printf("Press: 1 to push in stack 1\n");
    printf("Press: 2 to pop from stack 1\n");
    printf("Press: 3 to push in stack 2\n");
    printf("Press: 4 to pop from stack 2\n");
    printf("Press: 5 to exit\n");

    while (1)
    {
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                scanf("%d", &value);
                push1(value);
                break;

            case 2:
                pop1();
                break;

            case 3:
                scanf("%d", &value);
                push2(value);
                break;

            case 4:
                pop2();
                break;

            case 5:
                display1();
                display2();
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
