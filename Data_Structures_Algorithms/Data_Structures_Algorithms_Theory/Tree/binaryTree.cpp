#include <iostream>
using namespace std;

class Node{

    int data;
    Node* left;
    Node* right;

    Node(int d){
        int data = d;
        left = right = NULL;
    }
};

int main()