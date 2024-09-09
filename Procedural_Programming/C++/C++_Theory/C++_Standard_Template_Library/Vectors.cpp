#include <iostream>
#include <vector>
using namespace std;

int main()
{

vector <int> vec = {2, 4, 6, 8};

cout<<"size: "<<vec.size()<<endl;
cout<<"capacity: "<<vec.capacity()<<endl;

vec.push_back(10);
cout<<"size: "<<vec.size()<<endl;
cout<<"capacity: "<<vec.capacity()<<endl;

vec.pop_back();
cout<<"size: "<<vec.size()<<endl;
cout<<"capacity: "<<vec.capacity()<<endl;

return 0;
}