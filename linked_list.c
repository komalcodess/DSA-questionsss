
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void create(int k) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = k;
    newnode->next = NULL;
    head = newnode;
}

void insertFront(int k) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = k;
    newnode->next =head;
    head =newnode;
}

void insertEnd(int k) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp;

    newnode->data= k;
    newnode->next= NULL;

    if (head == NULL) {
        head= newnode;
        return;
    }

    temp =head;

    while (temp->next !=NULL)
        temp =temp->next;

    temp->next =newnode;
}

void insertAtGivenPos(int k, int p) {
    struct node *newnode;
    struct node *temp;
    int i;

    if (p ==1) {
        insertFront(k);
        return;
    }

    temp = head;

    for (i =1; i< p- 1 && temp !=NULL; i++)
        temp = temp->next;

    if (temp ==NULL) {
        printf("Invalid position\n");
        return;
    }

    newnode =(struct node *)malloc(sizeof(struct node));

    newnode->data =k;
    newnode->next =temp->next;
    temp->next =newnode;
}

void deleteFront() {
    struct node *deletenode;

    if (head ==NULL) {
        printf("List is empty\n");
        return;
    }

    deletenode = head;
    head = head->next;

    printf("Node deleted - %d\n", deletenode->data);
    free(deletenode);
}

void deleteEnd() {
    struct node *temp;
    struct node *deletenode;

    if (head ==NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next== NULL) {
        deletenode =head;
        head = NULL;

        printf("Node deleted - %d\n", deletenode->data);
        free(deletenode);
        return;
    }

    temp =head;

    while (temp->next->next != NULL)
        temp =temp->next;

    deletenode =temp->next;
    temp->next = NULL;

    printf("Node deleted - %d\n", deletenode->data);
    free(deletenode);
}

void deleteAtGivenPos(int p) {
    struct node *temp;
    struct node *deletenode;
    int i;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (p ==1) {
        deleteFront();
        return;
    }

    temp =head;

    for (i =1; i< p -1 && temp->next != NULL; i++)
        temp = temp->next;

    if (temp->next ==NULL) {
        printf("Invalid position\n");
        return;
    }

    deletenode =temp->next;
    temp->next = deletenode->next;

    printf("Node deleted - %d\n", deletenode->data);
    free(deletenode);
}

void size() {
    struct node *temp = head;
    int count = 0;

    while (temp !=NULL) {
        count++;
        temp = temp->next;
    }

    printf("Size = %d\n", count);
}

void display() {
    struct node *temp = head;

    if (head ==NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Linked List - ");

    while (temp!= NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

void findMiddle() {
    struct node *slow =head;
    struct node *fast = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    while (fast != NULL && fast->next != NULL) {
        slow =slow->next;
        fast = fast->next->next;
    }

    printf("Middle element = %d\n", slow->data);
}

int main() {
    int choice, k, p;

    printf("Press:\n");
    printf("1 insert node at front\n");
    printf("2 insert node at end\n");
    printf("3 insert node at specific position\n");
    printf("4 delete node from front\n");
    printf("5 delete node from end\n");
    printf("6 delete node from specific position\n");
    printf("7 find size of linked list\n");
    printf("8 find middle element of the list\n");
    printf("9 exit\n");

    while (1) {
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                scanf("%d", &k);
                insertFront(k);
                display();
                break;

            case 2:
                scanf("%d", &k);
                insertEnd(k);
                display();
                break;

            case 3:
                scanf("%d", &p);
                scanf("%d", &k);
                insertAtGivenPos(k, p);
                display();
                break;

            case 4:
                deleteFront();
                display();
                break;

            case 5:
                deleteEnd();
                display();
                break;

            case 6:
                scanf("%d", &p);
                deleteAtGivenPos(p);
                display();
                break;

            case 7:
                size();
                break;

            case 8:
                findMiddle();
                break;

            case 9:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
