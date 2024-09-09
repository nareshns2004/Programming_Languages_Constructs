#include <iostream>
using namespace std;

int * funcInt()
{
    int *ptr = new int;   // Memory Allocation in Heap
    *ptr = 6;
    cout<<"Value: "<<*ptr<<endl;

    return ptr;
}

int main()
{
    int *x = funcInt();
    cout<<"In Local: "<<*x<<endl;

    return 0;
}