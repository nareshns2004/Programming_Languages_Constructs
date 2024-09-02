#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void printStack(struct Node* top)
{
    printf("The Stack Elements are:\n");
    while(top!=NULL)
    {
        
        printf("%d\n",top->data);
        top = top->next;
    }
}

void isEmpty(struct Node* top)
{
    if(top==NULL)
    {
        printf("Stack is Empty\n");
    }
}

void isFull(struct Node* top)
{
    
        printf("Criteria is Full\n");
    
}

struct Node* pushStack(struct Node* top, int x)
{
    struct Node* ele = (struct Node*)malloc(sizeof(struct Node));
    //struct Node* head = top;
    ele->next = top;
    ele->data = x;
    top = ele;

    return top;

} 

int main()
{
    struct Node* zro = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fst = (struct Node*)malloc(sizeof(struct Node));
    struct Node* snd = (struct Node*)malloc(sizeof(struct Node));
    struct Node* trd = (struct Node*)malloc(sizeof(struct Node));
    struct Node* top = zro;

    zro->data = 1;
    zro->next = fst;

    fst->data = 2;
    fst->next = snd;

    snd->data = 3;
    snd->next = trd;

    trd->data = 4;
    trd->next = NULL;

    int x = 0;
    //top=NULL;
    printStack(top);
    isEmpty(top);
    isFull(top);

    //popStack(top);
    //pushStack(top, x);
    printStack(pushStack(top, x));

    return 0;

}