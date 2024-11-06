#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int k;
    cin>>k;

    while(k-->0)
    {
        if(x%10==0)
        {
            x/=10;
            continue;
        }
        x-=1;
    }

    cout<<x<<endl;

    return 0;
}