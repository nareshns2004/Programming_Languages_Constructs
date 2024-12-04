#include <iostream>

using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int fac = (w*(w+1))/2;

    if(n-fac*k>=0)
    {
        cout<<0<<endl;
    }
    else{
        cout<<fac*k-n<<endl;
    }

    return 0;
}