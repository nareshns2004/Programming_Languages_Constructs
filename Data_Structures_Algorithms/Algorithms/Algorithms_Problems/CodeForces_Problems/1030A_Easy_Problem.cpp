#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;

    
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;

        if(val==1)
        {
            cout<<"HARD"<<endl;
            return 0;;
        }
    }

    cout<<"EASY"<<endl;
    return 0;

}