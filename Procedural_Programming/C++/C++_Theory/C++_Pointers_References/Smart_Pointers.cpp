#include <iostream>
using namespace std;

void func()
{
    for(int i=0;i<1000;i++)
    {
        cout<<"Smart Pointers"<<endl;
        int *a = new int(5);
    }
}

int main()
{

    func();

    return 0;
}
