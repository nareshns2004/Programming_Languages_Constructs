#include <iostream>
using namespace std;

void funcInt()
{
    int *ptr = new int;   // Memory Allocation in Heap
    *ptr = 6;
    cout<<"Value: "<<*ptr<<endl;
}

int main()
{
    funcInt();


    return 0;
}