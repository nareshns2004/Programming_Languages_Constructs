#include <iostream>
using namespace std;

class Wrapper{
    private:
    int * ptr;
    
    public:
    Wrapper(int *a) : ptr(a)
    {
        cout <<"I am Constructor"<<endl;
    }

    ~Wrapper()
    {
        cout<<"I am Destructor"<<endl;
        delete ptr;
    }
};




int main()
{

    Wrapper wrpr(new int(10));
    return 0;
}