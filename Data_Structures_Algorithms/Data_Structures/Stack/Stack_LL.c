#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void printStack(struct Node* top)
{
     if(top==NULL)
    {
        printf("\nStack is Empty\n");
    }

    printf("\nThe Stack Elements are:\n");
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
    
        printf("Criteria Yet Not Decide for Full Stack\n");
    
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

struct Node* popStack(struct Node* top)
{
    struct Node* ptr = top->next;
    top->next = NULL;
    top = ptr;

    return top;

}

struct Node* peekStack(struct Node* top, int ind)
{
    for(int i=0;i<ind;i++)
    {
        top=top->next;
        if(top==NULL)
        {
            printf("\nInvalid Index");
            return NULL;
        }
    }

    printf("\nPeek Value: %d",top->data);
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
    struct Node* top1 = pushStack(top, x);
    printStack(top1);
    printStack(popStack(top1));
    int ind = 9;
    peekStack(top, ind);

    return 0;

}