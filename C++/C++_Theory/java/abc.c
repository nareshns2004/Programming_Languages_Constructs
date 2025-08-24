#include <stdio.h>
#include <string.h>

struct node{
    int data;
    struct node* next;

}

p1 -> r1  waiting for r2  (no premption)  
p2 -> r2  waiting for r1  (no premption)

x = 0;
while(x>0){
    
    p1.unlock()
    x++;
}

1->2->3->4->5

reverseLL(struct node* head){

    struct node* temp = head;
    struct node* curr = head.next;

    while(curr->next!=NULL){

        temp 

    }

    pop() dequeue

    {
        ptr! 3

        stack()
    }
    push()
    isEmpty()
    isFull()
    size()


}

int main(){

char str[10]  = "ABCDEF";

int ln = strlen(str);

reverSTR(str,ln);

printf("%s", str);

return 0;

}