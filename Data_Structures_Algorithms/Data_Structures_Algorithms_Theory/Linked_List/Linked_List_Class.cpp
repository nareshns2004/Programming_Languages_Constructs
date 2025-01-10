#include <iostream>
using namespace std;

class Node{

    int data;
    Node* next;

    public:
    Node(int val){
        data = val;
        next = NULL;
    }

};

class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){

        Node* newNode = new Node(val);

        if(head==NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
}


int main(){

    Node n1(5);
    

    return 0;
}