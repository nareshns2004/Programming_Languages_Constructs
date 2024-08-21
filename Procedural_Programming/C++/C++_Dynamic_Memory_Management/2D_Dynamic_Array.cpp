#include <iostream>
using namespace std;

void func2DArray()
{
    int rows, columns;
    cout<<"Enter the rows & columns of the array"<<endl;
    cout<<"rows: ";
    cin>>rows;
    cout<<"columns: ";
    cin>>columns;

    int **matrix = new int *[rows];
    int x = 1;
    for(int i=0;i<rows;i++)
    {
        matrix[i] = new int [columns];

        for(int j=0;j<columns;j++)
    {
        matrix[i][j] = x++;
        cout<<matrix[i][j]<<" ";
    }
        cout<<endl;
    }

    //To Verify the Array
    cout<<matrix[2][2]<<endl;   //Array indexing
    cout<<*(*(matrix +2) + 2);  //Array Derefrencing
    
}

int main()
{
    func2DArray();

    return 0;
}