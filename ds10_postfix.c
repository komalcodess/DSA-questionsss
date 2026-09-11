#include <stdio.h>
#define MAX 50

int stack[MAX],top=-1;

void push(int x)
{
    stack[++top]=x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    int T;
    scanf("%d",&T);
    getchar();

    while(T--)
    {
        char exp[50];
        fgets(exp,50,stdin);
        top=-1;

        int i=0;

        while(exp[i]!='\0')
        {
            if(exp[i]==' ')
                i++;

            else if(exp[i]>='0' && exp[i]<='9')
            {
                int num=0;

                while(exp[i]>='0' && exp[i]<='9')
                {
                    num=num*10+(exp[i]-'0');
                    i++;
                }

                push(num);
            }

            else
            {
                int b=pop();
                int a=pop();
                int result;

                switch(exp[i])
                {
                    case '+': result=a+b; break;
                    case '-': result=a-b; break;
                    case '*': result=a*b; break;
                    case '/': result=a/b; break;
                }

                push(result);
                i++;
            }
        }

        printf("%d\n",pop());
    }

}
