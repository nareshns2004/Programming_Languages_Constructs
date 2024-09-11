#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node* left;
struct node* right;
};

struct node* createNode(int val)
{
    struct node* p0 = (struct node*) malloc(sizeof(struct node));
    p0->data = val;
    p0->left = NULL;
    p0->right = NULL;

    return p0;
}

void preOrderTraversal(struct node* n0)
{
    if(n0!=NULL)
    {
        printf("%d ",n0->data);
        preOrderTraversal(n0->left);
        preOrderTraversal(n0->right);
    }

    return;
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

    preOrderTraversal(n0);

    return 0;
}