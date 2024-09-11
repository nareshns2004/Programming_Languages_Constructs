#include <stdio.h>
#include <stdlib.h>

struct Node{                          //Node of the Tree
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int val)      //Function to create Node
{
    struct Node *n;
    n = (struct Node*)malloc(sizeof(struct Node));  
    n->data = val;
    n->left = NULL;
    n->right = NULL;

    return n;
}

int main()
{

struct Node *p = createNode(7);             // root node

struct Node *p1 = createNode(9);            // left node

struct Node *p2 = createNode(11);           // right node


p->left = p1;
p->right = p2;

return 0;

}