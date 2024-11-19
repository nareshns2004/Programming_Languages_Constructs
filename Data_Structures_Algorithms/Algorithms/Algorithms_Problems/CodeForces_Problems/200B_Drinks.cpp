#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);

    double conc = 0;
    int total = 0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        conc+=arr[i];
    }

    cout<<setprecision(5)<<((double)conc)/n;

    return 0;
}