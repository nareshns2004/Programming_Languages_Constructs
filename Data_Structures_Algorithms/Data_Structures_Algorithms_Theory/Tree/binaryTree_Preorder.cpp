#include <iostream>
#include <vector>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = right = NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int> v){
        idx++;

        if(v[idx]==-1){
            return NULL;
        }

        Node* currNode = new Node(v[idx]);
        currNode->left = buildTree(v);
        currNode->right = buildTree(v);

        return currNode;
}

void printNode(Node* root){

        if(root == NULL){
            return;
        }

        cout<<root->data<<" ";
        printNode(root->left);
        printNode(root->right);

        return;
}

int main(){

    vector<int> v = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node* root = buildTree(v);

    printNode(root);

    return 0;
}