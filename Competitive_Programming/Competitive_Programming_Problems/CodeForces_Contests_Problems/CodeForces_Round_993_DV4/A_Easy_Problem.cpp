#include <iostream>
using namespace std;

void ordered(int n)
{
    
    int cnt = 0;

    for(int i=1;i<n;i++)
    {
        if(n-i>=1)
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        ordered(n);
    }


    return 0;
}