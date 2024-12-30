#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int h,m;
        cin>>h>>m;

        if(h==0&&m==0){
            return 0;
        }

        int min = (23-h)*60 + (60-m);

        cout<<min<<endl;

    }

    return 0;

}