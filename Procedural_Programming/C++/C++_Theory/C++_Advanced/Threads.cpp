#include <iostream>
#include <thread>

void Test(int x)
{
    std::cout<<"I am a Thread"<<std::endl;
    std::cout<<"My Value is "<<x<<std::endl;

}


int main()
{
    std::thread myThread(&Test, 100);
    myThread.join();
    std::cout<<"I am Main Thread"<<std::endl;
    

    return 0;
}