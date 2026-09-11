#include <stdio.h>
#define MAX 20

void create(int* rear, int* front)
{
    *front=-1;
    *rear=-1;
    printf("The queue has been created!!\n");
    
}

int isEmpty(int rear, int front){
    if(rear==-1 || front ==-1)
    return 1;
    return 0;
}

void enqueue(int *queue,int k,int *rear, int *front){
if(*rear==MAX-1){
    return;
}

if(*front ==-1)
        *front =0;
        
(*rear)++;
queue[*rear]=k;
}


int dequeue(int *queue, int *rear , int *front)

{
    if(isEmpty(*rear, *front))
    return -1;

   int val=queue[*front];
   (*front)++;

    if (*front > *rear)
    {
        *front = -1;
        *rear = -1;
    }
 return val;
}

int size(int rear, int front){
    if(isEmpty(rear, front))
    return 0;
    
    else {
        return rear-front+1;
    }
}

void display(int *queue,int rear, int front){
    if(isEmpty(rear, front))
        return;
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
}

int main(){
    int queue[MAX];
    int front=-1,rear=-1;
    int k,s;
    int choice;

    while(1){
        printf("Press 1 to Create::\n");
        printf("Press 2 to Enqueue::\n");
        printf("Press 3 to Dequeue::\n");
        printf("Press 4 to check whether the queue is empty or not::\n");
        printf("Press 5 to know the size::\n");
        printf("Press 6 to display::\n");
        printf("Press 7 to exit::\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: 
            create(&rear, &front);
            break;

            case 2:
            printf("Enter the element to enqueue: ");
            scanf("%d",&k);
            enqueue(queue,k,&rear, &front);
            
            break;

            case 3:
            k=dequeue(queue, &rear, &front);
            if (k != -1)
                {
                    printf("The dequeued element is: %d\n", k);
                }
                break;

            case 4:
            if(isEmpty(rear, front))
            printf("The queue is empty");
            else {
                printf("The queue is not empty");

            }
            break;

            case 5:
            s=size(rear, front);
            printf("The size of the queue is : %d",s);
            break;

            case 6:
            display(queue, rear, front);
            break;

            case 7:
            return 0;

            default:
            printf("Invalid case");
            return 0;

        }

    }
}