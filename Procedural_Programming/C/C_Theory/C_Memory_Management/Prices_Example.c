#include <stdio.h>
#include <stdlib.h>

    void getPrice(float* ptr)
    {
    for(int i=0;i<5;i++){

        scanf("%f",(ptr+i));
        
    }
    }

    void SeePrice(float* ptr)
    {
    for(int i=0;i<5;i++){
        printf("\n%0.2f",*(ptr+i));
    }
    }

int main()
{
    float * ptr = (float *)malloc(5*sizeof(float));

    if(ptr==NULL)
    {
        printf("Memory Allocation Failed\n");
    }

    getPrice(ptr);
    SeePrice(ptr);

    ptr = (float*) realloc(ptr,8*sizeof(float));
    printf("\n The Size is %ld", sizeof(ptr));


    return 0;
}