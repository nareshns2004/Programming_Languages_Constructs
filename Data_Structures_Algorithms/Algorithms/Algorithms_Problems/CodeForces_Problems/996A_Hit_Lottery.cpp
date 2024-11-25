#include <iostream>
using namespace std;

int main()
{
    int n;   // no of dollars
    cin>>n;

    int sum = 0;
    int notes[] = {100, 20, 10, 5, 1};

    for(int i =0;i<5;i++)
    {
        sum+=n/notes[i];
        n=n%notes[i];
    }
 
    cout<<sum<<endl;

    return 0;
}