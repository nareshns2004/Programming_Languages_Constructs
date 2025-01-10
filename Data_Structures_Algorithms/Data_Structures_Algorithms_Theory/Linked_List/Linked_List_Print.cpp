#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        this->data = val;
        this->next = NULL;
    }
};

    void print(Node* head){

        while(head!=NULL){
            cout<<(head->data)<<endl;
            head = head->next;
        }
    }

    int length(Node* head){
        if(head==NULL){
            return 0; 
        }

        return (1 + length(head->next));
    }


    int main(){

        //Static Creation
        Node n1(1);
        Node n2(2);
        Node n3(3);
        Node n4(4);
        Node n5(5);

        Node* head = &n1;
        n1.next = &n2;
        n2.next = &n3;
        n3.next = &n4;
        n4.next = &n5;

        print(head);
        
        //Dynamic Creation

        Node* np1 = new Node(6);
        Node* np2 = new Node(7);
        Node* np3 = new Node(8);
        Node* np4 = new Node(9);
        Node* np5 = new Node(10);

        Node* init = np1;
        np1->next = np2;
        np2->next = np3;
        np3->next = np4;
        np4->next = np5;

        print(init);

        cout<<length(init)<<endl;


        return 0;
    }