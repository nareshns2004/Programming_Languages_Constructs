#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cntm = 0,cntc = 0;
    while(n--)
    {
        int m,c;
        cin>>m>>c;

        if(m>c){
            cntm++;
        }
        else if(c>m){
            cntc++;
        }

    }
    
    if(cntm>cntc){
        cout<<"Mishka"<<endl;
    }
    else if(cntc>cntm){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }


    return 0;
}