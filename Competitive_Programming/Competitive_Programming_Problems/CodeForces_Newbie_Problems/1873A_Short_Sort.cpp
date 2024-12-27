#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;

    string s;

    while(t--)
    {
        cin>>s;

       if(s=="abc"||s=="cba"||s=="acb"||s=="bac"){
            cout<<"YES"<<endl;
       }
       else{
            cout<<"NO"<<endl;
       }

    }

    return 0;
}