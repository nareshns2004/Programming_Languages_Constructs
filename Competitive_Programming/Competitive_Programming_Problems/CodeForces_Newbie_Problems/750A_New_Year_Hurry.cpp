#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int tm = 240;
    int cnt = 0;
    int sum = 0;
    for(int i=1;i<=n;i++){
        
        sum+=5*i;
        if(240-k-sum>=0){
            cnt++;
        }
        else{
            break;
        }
        
    }

    cout<<cnt<<endl;


    return 0;
}