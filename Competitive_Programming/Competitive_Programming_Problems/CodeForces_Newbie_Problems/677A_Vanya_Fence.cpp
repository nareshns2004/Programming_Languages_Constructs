#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;

    vector <int> arrh(n);   // Dynamic length arrays are not supported in c++
    
    int width = 0;

    for(int i=0;i<n;i++)
    {
        cin>>arrh[i];

        width+=(arrh[i]<=h)?1:2;
    }

    cout<<width<<endl;

    return 0;
}