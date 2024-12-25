#include <iostream>
using namespace std;

long long recurse(long long n){

    if(n<=3){
        return 1;
    }

   return 2*recurse(n/4);
    
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        

        if(n<=3){
            
            cout<<1<<endl;
        }
        else{
            cout<<recurse(n)<<endl;;
        }

    }


    return 0;
}