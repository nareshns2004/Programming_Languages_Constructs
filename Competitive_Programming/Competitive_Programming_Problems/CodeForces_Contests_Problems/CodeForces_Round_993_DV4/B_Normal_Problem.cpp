#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void new_string(string a)
{
    int len = a.size();

    for(int i=0;i<len;i++)
    {
        if(a[i]=='p')
        {
            a[i] = 'q';
        }
        else if(a[i]=='q')
        {
            a[i] = 'p';
        }

    }

    reverse(a.begin(),a.end());

    cout<<a<<endl;

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string a;
        cin>>a;

        new_string(a);
    }

    return 0;
}