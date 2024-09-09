#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *ptr;
};

void isEmpty(struct stack* sp)
{
    if (sp->top==-1)
    {
        printf("Empty Stack\n");
    }
    else{
        printf("Not Empty Stack\n");
    }
    
}

void isFull(struct stack* sp)
{
    if (sp->top==sp->size-1)
    {
        printf("Full Stack\n");
    }
    else{
        printf("Not Full Stack\n");
    }
    
}

void push(struct stack* sp, int data)          //Pushing value on Stack
{
    if(sp->top==sp->size-1)
    {
        printf("Stack is Full\n");
        
    }
    else{
        sp->top++;
        sp->ptr[sp->top] = data;
        
    }
}

int pop(struct stack* sp)                      //Popping value out of Stack
{
    if(sp->top==-1)
    {
        printf("Stack is Empty\n");
        return -1;
    }
    else{
        int val = sp->ptr[sp->top];
        sp->top--;

        return val;
    }
}

void printstack(struct stack* sp)              // Printing Stack
{
    int i = sp->top;
    printf("Stack Elements are: \n");
    while(!(i<0))
   { 
    printf("%d\n",sp->ptr[i]);
    i--;
   }
}


int main()
{
    struct stack* sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 80;
    sp->top = -1;
    sp->ptr = (int*)malloc(sizeof(int)*sp->size);

    isEmpty(sp);
    isFull(sp);
    push(sp,54);
    push(sp,44);
    push(sp,34);
    printstack(sp);
    int val = pop(sp);
    printf("Pop Value: %d\n",val);
    printstack(sp);

    return 0;
}