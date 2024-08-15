#include <iostream>
#include <string>
using namespace std;

class Laptop
{
    string name;
    string brand;
    string os;
    string purpose;
    double price;
    int year;

    public:
    Laptop()
    {
        name = "NotyDelly";
        brand = "Dell";
        os = "Linux";
        purpose = "Programming";
        price = 31800;
        year = 2014;
    }

    Laptop(string name, string brand, string os)
    {
        this->name = name;
        this->brand = brand;
        this->os = os;
        
    }

    void setOSName()
    {
        os = "Ubuntu";
    }

    string getOSName()
    {
        return os;
    }

};


int main()
{
    Laptop l;
    l.setOSName();
    cout<<l.getOSName()<<endl;

    Laptop n("notebook", "Dell", "fedora");
    cout<<n.getOSName();

    return 0;
}