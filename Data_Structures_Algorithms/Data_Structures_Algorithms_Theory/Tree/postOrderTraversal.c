#include <stdio.h>
#include <stdlib.h>

struct node{           // Tree Node
 
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int val)        // Creating Node by Function
{
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = val;
    p->left = NULL;
    p->right = NULL;

    return p;

}

void postOrderTraversal(struct node* n0)
{
    if(n0!=NULL)
    {
    postOrderTraversal(n0->left);
    postOrderTraversal(n0->right);
    printf("%d",n0->data);
    }
}

int main()
{
    struct node* n0 = createNode(4);
    struct node* n1 = createNode(1);
    struct node* n2 = createNode(5);
    struct node* n3 = createNode(2);
    struct node* n4 = createNode(6);

    n0->left = n1;
    n0->right = n4;
    n1->left = n2;
    n1->right = n3;

    postOrderTraversal(n0);

    return 0;
}
