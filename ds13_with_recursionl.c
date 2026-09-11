#include <stdio.h>

#define MAX 100

char stack[MAX];
int top =-1;

void push(char ch)
{
    if (top ==MAX - 1)
        return;

    stack[++top] = ch;
}

char pop()
{
    if (top ==-1)
        return '\0';

    return stack[top--];
}

void reverse(char str[], int i, int n)
{
    if (i ==n)
        return;

    push(str[i]);

    reverse(str, i + 1, n);

    str[n -1 -i] =pop();
}

int main()
{
    int tc;
    char str[MAX];

    scanf("%d", &tc);

    while (tc--)
    {
        top =-1;

        scanf("%s", str);

        int n =0;

        while (str[n] != '\0')
        {
            n++;
        }

        reverse(str, 0, n);

        printf("%s\n", str);
    }

    return 0;
}