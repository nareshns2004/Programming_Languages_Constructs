#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int yr = 0;

    while(a<=b)
    {
        a*=3;
        b*=2;
        yr++;
    }

    cout<<yr;
    return 0;
}