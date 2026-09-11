#include <stdio.h>

#define MAX 100

void push(char *stack, int *top, char val)
{
    if (*top == MAX - 1)
        return;
    

    (*top)++;
    stack[*top] =val;
}

char pop(char *stack, int *top)
{
    if (*top ==-1)
    {
        return '\0';
    }

    char val =stack[*top];
    (*top)--;

    return val;
}

int main()
{
    int tc;
    char stack[MAX];
    char str[MAX];

    scanf("%d", &tc);

    while (tc--)
    {
        int top =-1;

        scanf("%s", str);

        for (int i=0;str[i] !='\0'; i++)
        {
            push(stack,&top, str[i]);
        }

        for (int i = 0;str[i] != '\0'; i++)
        {
            str[i] =pop(stack, &top);
        }

        printf("%s\n", str);
    }

    return 0;
}