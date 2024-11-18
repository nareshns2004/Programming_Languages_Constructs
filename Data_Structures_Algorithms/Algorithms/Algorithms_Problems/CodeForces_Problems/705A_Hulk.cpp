#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string a = "I hate it";
    string b = "I love it";
    string c = "I love that";
    string d = "I hate that";
    int i = 1;

    while(i<n)
    {
        if(i%2==0){
            cout<<"I love that"<<" ";
        }
        else{
            cout<<"I hate that"<<" ";
        }
    
        i++;
    }

    if(n%2==0)
    {
        cout<<"I love it"<<endl;
    }
    else{
        cout<<"I hate it"<<endl;
    }

    return 0;
}