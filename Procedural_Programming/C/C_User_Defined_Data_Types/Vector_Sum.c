#include <stdio.h>

struct vector
{
    int x_axis;
    int y_axis;
};

void printSum(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x_axis = v1.x_axis+ v2.x_axis;
    sum.y_axis = v1.y_axis + v2.y_axis;
    printf("X axis: %d, Y axis: %d ",sum.x_axis,sum.y_axis);
}

int main()
{
    struct vector v1 = {10, 20}, v2 = {15, 40};

    struct vector sum;

    printSum(v1,v2,sum);

    //printf("X axis: %d, Y axis: %d ",sum.x_axis,sum.y_axis);

    
    return 0;
}