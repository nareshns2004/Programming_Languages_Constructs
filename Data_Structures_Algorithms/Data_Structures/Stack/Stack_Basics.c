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


int main()
{
    struct stack* sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 80;
    sp->top = -1;
    sp->ptr = (int*)malloc(sizeof(int)*sp->size);

    isEmpty(sp);
    isFull(sp);

    return 0;
}