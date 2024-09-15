#include <stdio.h>
#include <malloc.h>

struct Node {
    int data;
    struct Node* right;
    struct Node* left;
};

struct Node* createNode(int val)
{
    struct Node* n0 = (struct Node*)malloc(sizeof(struct Node));
    n0->data = val;
    n0->left = NULL;
    n0->right = NULL;

    return n0;
}

struct Node* searchBST(struct Node* root, int ele)
{

    if(root==NULL)
    {
        return NULL;
    }

    if(root->data == ele)
    {
        return root;
    }
    else if(ele>root->data)
    {
        return searchBST(root->right,ele);
    }
    else{
        return searchBST(root->left,ele);
    }

}

struct Node* insertBST(struct Node* root, int ele)
{
    struct Node* elm = (struct Node*)malloc(sizeof(struct Node));
    elm->data = ele;
    elm->right = NULL;
    elm->left = NULL;

    if(root==NULL)
    {
        return elm;
    }
   
    struct Node* prev = NULL;
    struct Node* curr = root;
    while(curr!=NULL)
    {
        prev = curr;
        if(curr->data == ele)
        {
            printf("Duplicate Node\n");
            return curr;
        }
        else if(ele > curr->data)
        {
            curr = curr->right;
        }/**
         * Searches for a node in a binary search tree with a given value.
         *
         * @param root The root node of the binary search tree.
         * @param ele The value to search for.
         * @return The node with the given value, or NULL if it is not found.
         */
        else{
            curr = curr->left;
        }

    }

      if(ele > prev->data)
        {
            prev->right = elm;
        }
        else{
            prev->left = elm;
        }

    
        return root;
}

struct Node* searchIter(struct Node* root,int ele)
{
       while(root!=NULL)
       {
        if(root->data==ele)
        {
            return root;
        }
        else if(ele > root->data)
        {
            root = root->right;
        }
        else{
            root = root->left;
        }
       }

       return NULL;
}


int main()
{

struct Node* root = createNode(8);
struct Node* p1 = createNode(6);
struct Node* p2 = createNode(4);
struct Node* p3 = createNode(7);
struct Node* p4 = createNode(11);
struct Node* p5 = createNode(9);
struct Node* p6 = createNode(14);

root->left = p1;
root->right = p4;
p1->left = p2;
p1->right = p3;
p4->left = p5;
p4->right = p6;

printf("Enter the Element to be Added\n");
int ele = 0;
scanf("%d",&ele);
struct Node* ans1= searchBST(root,ele);

if(ans1!=NULL)
{
    printf("%d Element is Present\n",ans1->data);
}
else{
    printf("Element is not present\n");
}

insertBST(root,ele);

struct Node* ans2 = searchIter(root,ele);

if(ans2!=NULL)
{
    printf("%d Element Added\n",ans2->data);
}
else{
    printf("Element is not Added\n");
}

    return 0;
}