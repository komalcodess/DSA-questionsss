#include <stdio.h>
#include <stdlib.h>
#define MAX 50
char stack[MAX];
int top=-1;

void push(char k){
if(top==MAX-1)
    return;
else
    stack[++top]=k;
}

char pop(){
if(top==-1)
    return 0;
else
    return stack[top--];
}

int main()
{
    int tc;
    scanf("%d",&tc);

    while(tc--){
        char str[50];
        int balanced=1;

        top=-1;

        scanf("%s",str);

        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='(' || str[i]=='{' || str[i]=='[')
            {
                push(str[i]);
            }
            else if(str[i]==')' || str[i]=='}' || str[i]==']')
            {
                if(top==-1)
                {
                    balanced=0;
                    break;
                }

                char x=pop();

                if((str[i]==')' && x!='(') ||
                   (str[i]=='}' && x!='{') ||
                   (str[i]==']' && x!='['))
                {
                    balanced=0;
                    break;
                }
            }
        }

        if(top!=-1)
            balanced=0;

        if(balanced)
            printf("Balanced\n");
        else
            printf("Not balanced\n");
    }

    return 0;
}
