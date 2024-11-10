#include <iostream>
using namespace std;

int main()
{
    int n;    // no of stops
    cin>>n;

    int a[n] = {0},b[n] = {0};  // no of people entering & exiting the stops
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];

    }

    int diff = 0;
    int max = 0;

    for(int i=0;i<n;i++)
    {
        diff += (b[i] - a[i]);

        if(max<=diff)
        {
            max = diff;
        }
    }

    cout<<max;

    return 0;
}