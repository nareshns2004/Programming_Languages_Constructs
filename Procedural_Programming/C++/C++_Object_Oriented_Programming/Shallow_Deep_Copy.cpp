#include <iostream>
#include <string>
using namespace std;

class Student
{
    public:
    string name;
    double cgpa;
    
    Student(string name, double cgpa)  // Constructor
    {
        this->name=name;
        this->cgpa=cgpa;
    }

    Student(Student &obj)     // Shallow Copy Constructor
    {
        this->name = obj.name;
        this->cgpa = obj.cgpa;
        
    }

    void getInfo()  // Getter Function
    {
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<cgpa<<endl;
    }
    

};

int main()
{
    Student s1("Naresh Kumar", 7.2);
    s1.getInfo();
    Student s2(s1);
    s2.getInfo();
    return 0;
}