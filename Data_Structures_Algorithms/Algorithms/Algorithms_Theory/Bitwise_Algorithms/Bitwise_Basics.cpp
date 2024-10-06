#include <iostream>
using namespace std;

int fun(int&a)
{
    a = 10;
    cout<<sizeof(&a)<<endl;
    return a;
}
int main()
{
    int a = 5, b = 8;
    fun(a);
    cout<<(a)<<endl;
    return 0;
}