#include <stdio.h>
#include <stdlib.h>

struct Node{                          //Tree Node

    int data;
    struct Node* right;
    struct Node* left;
};

struct Node* createNode(int val)        //Creating Tree Node Function
{
    struct Node* n0 = (struct Node*)malloc(sizeof(struct Node));
    n0->data = val;
    n0->left = NULL;
    n0->right = NULL;

    return n0;
}

struct Node* binarySearch(struct Node* root, int key)   //Binary Search in Tree
{
    if(root==NULL)
    {
        return NULL;
    }

    if(root->data == key)
    {
        return root;
    }
    else if(key>root->data)
    {
        return binarySearch(root->right, key);
    }
    else if(key<root->data)
    {
        return binarySearch(root->left, key);
    }

    return NULL;
}

int main()
{

struct Node* root = createNode(8);
struct Node* l1 = createNode(4);
struct Node* r1 = createNode(9);
struct Node* l2 = createNode(3);
struct Node* l3 = createNode(5);

root->left = l1;
root->right = r1;
l1->left = l2;
l1->right = l3; 
int key = 0;
printf("Enter the Key Please:\n");
scanf("%d",&key);

struct Node* ans = binarySearch(root,key);

//printf("%p",ans);
if(ans!=NULL)
{
printf("The Key is availabe\n");
}
else{
printf("The Key is not availabe\n");

}
    return 0;
}