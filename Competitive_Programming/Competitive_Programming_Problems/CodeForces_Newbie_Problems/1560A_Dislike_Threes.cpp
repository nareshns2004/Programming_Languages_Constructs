#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int k;
        cin>>k;
        int cnt=0;

        for(int i=0;i<k;i++){

            cnt++;

            if(cnt%3==0){
                cnt++;
            }

            if(cnt%10==3){
                cnt++;
            }

           
        }

        cout<<cnt<<endl;

    }

    return 0;
}