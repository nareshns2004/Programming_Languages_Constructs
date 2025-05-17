#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int rem = 0;
        
        rem = n%x;
        if(rem>y){
            cout<<n-(rem-y)<<endl;
        }
        else if(rem<y){
            cout<<n - rem - x + y<<endl;
        }
        else{
            cout<<n<<endl;
        }
    
    }
    
    return 0;
}