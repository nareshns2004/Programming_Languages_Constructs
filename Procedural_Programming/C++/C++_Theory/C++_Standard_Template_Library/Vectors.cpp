#include <iostream>
#include <vector>
using namespace std;

int main()
{

/*vector <int> vec = {2, 4, 6, 8};

cout<<"size: "<<vec.size()<<endl;
cout<<"capacity: "<<vec.capacity()<<endl;

vec.push_back(10);
cout<<"size: "<<vec.size()<<endl;
cout<<"capacity: "<<vec.capacity()<<endl;

vec.pop_back();
cout<<"size: "<<vec.size()<<endl;
cout<<"capacity: "<<vec.capacity()<<endl;*/

vector <int> nar(0);
nar.reserve(10);
for(int i=0;i<11;i++)
{
    nar.push_back(i);
    cout<<nar.size()<<" ";
    cout<<nar.capacity()<<endl;
}

return 0;
}