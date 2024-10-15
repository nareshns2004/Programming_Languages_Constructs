#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vec1 = {1,2,3,4,5};
    vector <int> vec2(vec1);        //Initialization Method

    for(int i : vec2)
    {
        cout<<i<<" ";
    }

    return 0;
}