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

class teacher : public person{

    public:
    string subject;
};

int main()
{
    

    return 0;
}