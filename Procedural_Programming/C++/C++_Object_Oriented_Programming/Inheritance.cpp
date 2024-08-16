#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    public:
    double price;
    int wheels;
    int speed;

    Vehicle(double price, int wheels, int speed)
    {
        cout<<"First Constructor"<<endl;
        this->price = price;
        this->wheels = wheels;
        this->speed = speed; 

    }

    ~Vehicle()
    {
        cout<<"First Destructor"<<endl;
    }
};

class Car : public Vehicle{

    public:
    string brand;

    Car(string brand, double price, int wheels, int speed) : Vehicle(price,wheels,speed)
    {
        this->brand = brand;
        cout<<"Second Constructor"<<endl;
    }

    void getInfo()
    {
        cout<<"Car Brand: "<<brand<<endl;
        cout<<"Car Price: "<<price<<endl;
        cout<<"Wheels No: "<<wheels<<endl;
        cout<<"Car Speed: "<<speed<<endl;
    }

    ~Car()
    {
        cout<<"Second Destructor"<<endl;
    }

};

int main()
{

    Car c1("Volkswagen", 200000, 4, 120);
    c1.getInfo();

    return 0;
}