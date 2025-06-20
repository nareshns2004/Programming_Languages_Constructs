#include <iostream>
using namespace std;



int main(){

    int n = 65;
    char ch = 'A';

    cout<<n<<endl;

    void* ptr = &n;

    cout<<ptr<<endl;

    cout<<(*(float*)ptr)<<endl;


    return 0;

}

