#include <stdio.h>
#define MAX 100

int stack[MAX];
int top=-1;

void push(int k){
if(top==MAX-1)
    return;
else
    stack[++top]=k;
}

int pop(){
if(top==-1)
    return -1;
else
    return stack[top--];
}

int main()
{
    int tc;
    scanf("%d",&tc);

    while(tc--){
        char str[MAX];
        int max=0;

        top=-1;
        push(-1);

        scanf("%s",str);

        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='(')
            {
                push(i);
            }
            else
            {
                pop();

                if(top==-1)
                {
                    push(i);
                }
                else
                {
                    int len=i-stack[top];

                    if(len>max)
                        max=len;
                }
            }
        }

        printf("%d\n",max);
    }

    return 0;
}
