#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;

    string s;
    cin>>s;
    int cal = 0;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1'){
            cal+=a1;
        }
        else if(s[i]=='2'){
            cal+=a2;
        }
        else if(s[i]=='3'){
            cal+=a3;
        }
        else{
            cal+=a4;
        }
    }

    cout<<cal<<endl;

    return 0;
}