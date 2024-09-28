#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

  
 Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    Node n1(3);         //Creating Head Node
    Node n2(4);         //Creating Second Node

    n1.next = &n2;

    cout<<n1.data<<" "<<n2.data<<endl;

    Node* head = &n1;   //Creating Head Pointer
    cout<<head->data<<" "<<(*head).data<<endl;

return 0;
}