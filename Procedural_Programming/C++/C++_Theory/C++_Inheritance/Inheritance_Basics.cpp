#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person()
    {
        cout<<"I am constructor of Person Class"<<endl;
    }

    void getInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

    ~Person()
    {
        cout<<"I am Destructor of Person Class"<<endl;
        //delete();
    }
};

class Student : public Person{
    public:
    int rollno;
    Student()
    {
        cout<<"I am Constructor of Student class"<<endl;
    }

    void getInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Rool No: "<<rollno<<endl;
    }

    ~Student()
    {
        cout<<"I am Destructor of Student class"<<endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Naresh Kumar";
    s1.age = 30;
    s1.rollno = 2;
    s1.getInfo();
    return 0;
}