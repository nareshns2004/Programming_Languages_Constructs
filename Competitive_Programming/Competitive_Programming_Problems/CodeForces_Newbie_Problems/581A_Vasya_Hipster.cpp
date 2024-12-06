#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<(a>b?b:a)<<" ";

    cout<<(a>b?(a-b)/2:(b-a)/2)<<endl;

    return 0;
}