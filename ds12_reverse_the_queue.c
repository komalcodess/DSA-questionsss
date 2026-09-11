#include <stdio.h>
#define MAX 20
void enqueue(int *queue , int * front , int * rear, int val){

    if (*rear == MAX - 1)
    {
        printf("Queue is full!\n");
        return;
    }

    if (*front == -1)
    {
        *front = 0;
    }

    (*rear)++;
    queue[*rear] = val;

}

int dequeue(int *queue, int* front , int* rear){

    if (*front == -1)
    {
        return -1;
    }

    int value = queue[*front];
    (*front)++;

    if (*front > *rear)
    {
        *front = -1;
        *rear = -1;
    }

    return value;


}

void push(int *stack, int *top, int value)
{
    if (*top==MAX- 1)
    {
        printf("Stack is full!\n");
        return;
    }

    (*top)++;
    stack[*top] = value;
}

int pop(int *stack, int *top)
{
    if (*top == -1)
    {
        return -1;
    }

    int value =stack[*top];
    (*top)--;

    return value;
}

void revQueue(int *queue, int *stack , int* front , int * rear, int *top){

    int value;

    while(*front!=-1)
    {
         value = dequeue(queue,front,rear);
        push(stack, top,value);
    }

    while(*top!=-1){
        int x;
        x=pop(stack, top);
        enqueue(queue, front, rear, x);
    }
}

void display(int *queue, int front, int rear)
{
    if (front ==-1)
    {
        printf("Queue is empty!\n");
        return;
    }

    for (int i= front; i<= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main(){
    int queue[MAX],stack[MAX];
    int front=-1,rear=-1,top=-1;
    int n,k;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements\n ");
    for(int i=0;i<n;i++)
    {
        printf("%d element: ",i+1);
        scanf("%d",&k);

         enqueue(queue, &front, &rear, k);
    
    }
    revQueue(queue, stack, &front, &rear, &top);
        printf("Reversed queue: ");
    display(queue, front, rear);

}