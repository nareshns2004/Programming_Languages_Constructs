#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    int a =0,b=0,c=0,d=0;
    cin>>a>>b>>c>>d;

    switch(1)
    {
        case 1: if(a==b||a==c||a==d)
                cnt++;
        case 2: if(b==c||b==d)
                cnt++;
        case 3: if(c==d)
                cnt++;
        default:
        break;
  }

    cout<<cnt;

    return 0;
}
