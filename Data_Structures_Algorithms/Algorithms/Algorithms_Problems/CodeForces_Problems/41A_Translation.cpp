#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string word, t; //strings to be taken as input
    cin>>word>>t;

    reverse(t.begin(),t.end());

    if(word==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}