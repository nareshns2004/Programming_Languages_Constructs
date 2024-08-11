#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;                  // Creating Linked List with int data & Linked List reference
    struct Node* next;
};

void TraverseLinkedList(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    struct Node *head = NULL;

    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node)); //Creating Node 1
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node)); //Creating Node 2
    struct Node *n3 = (struct Node *)malloc(sizeof(struct Node)); //Creating Node 3
    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    TraverseLinkedList(head);

    return 0;
}