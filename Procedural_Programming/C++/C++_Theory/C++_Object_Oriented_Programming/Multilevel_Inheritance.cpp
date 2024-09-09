#include <iostream>
using namespace std;

class person{
    public:
    string name;
    int age;

};

class student : public person{

    public:
    int roll;
};

class gradStudent : public student{
    public:
    string research;
};

int main()
{
    gradStudent s1;
    s1.research = "Quantum Physics";
    s1.name = "Naresh Kumar";

    cout<<s1.research<<endl;
    cout<<s1.name<<endl;

    
    return 0;
}