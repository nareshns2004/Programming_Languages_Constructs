#include <iostream>
using namespace std;

int getMin(int arr[], int sz){

    int min = arr[0];

    for(int i=0;i<sz;i++){
        if(arr[i]<=min){
            min = arr[i];
        }
    }

    return min;
}

int main(){

    int arr[5] = {1,2,3,4,5};
    cout<<getMin(arr,5)<<endl;

    return 0;

}

