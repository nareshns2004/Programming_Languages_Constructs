#include <stdio.h>

void Bubble_Sort(int* arr,int x)  // Inefficient Bubble Sort
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x-1;j++)
        {
            if(arr[j]>=arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j] = temp;
            }
        }
    }

   // return arr;
}

int main()
{
    int arr[5] = {10,5,6,1,34};

    Bubble_Sort(arr,5);
    
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}