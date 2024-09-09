#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
}; 

void LL_Traversal(struct Node* ptr)
{
    //int i=0;
    while(ptr!=NULL)
    {
        printf("\n%d",ptr->data);
        ptr=ptr->next;
        //i++;
    }
    printf("\n");
}

void InsertBetween(struct Node *head, int data, int node)
{
    struct Node *ptr = head;
    struct Node *btw = (struct Node*)malloc(sizeof(struct Node));
    btw->data = data;
    for(int i=1;i<node;i++)
    {
        ptr = ptr->next;

    }
    btw->next = ptr->next;
    ptr->next = btw;
}

 void InsertAtEnd(struct Node* head, int data)
 {
    struct Node* ptr = head;
    struct Node* obj = (struct Node *)malloc(sizeof(struct Node));
    obj->data = data;
    while(ptr->next!=NULL)
    {
        ptr = ptr->next;
    }
    ptr->next=obj;
    ptr->next->next = NULL;
    
 }

int main()
{
    struct Node* head = (struct Node*) malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 21;
    head->next = second;

    second->data = 31;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 61;
    fourth ->next = NULL;
    LL_Traversal(head);
    int data,node;
    printf("Enter Node Data & Node Number: ");
    scanf("%d %d",&data,&node);
    InsertBetween(head, data,node);  // Inserting Node between 3 & 4th Position
    LL_Traversal(head);
    InsertAtEnd(head, data);        // Insert Node at the End
    LL_Traversal(head);

    return 0;
}