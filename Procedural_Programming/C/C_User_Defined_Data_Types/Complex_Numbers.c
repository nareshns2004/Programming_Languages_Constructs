//Create a program to display sum of complex numbers by using pass by reference
#include <stdio.h>

struct complexNumbers
{
    int real;
    int img;
};

void calcSum(struct complexNumbers n1, struct complexNumbers n2, struct complexNumbers *sum)
{

    sum->real = n1.real + n2.real;
    sum->img = n1.img + n2.img;

    printf("Real Part: %d, Img Part: %d\n", sum->real, sum->img); // In Function
}

int main()
{

    struct complexNumbers n1 = {5, 10};
    struct complexNumbers n2 = {6 , 9};

    struct complexNumbers sum = {0};

    calcSum(n1,n2,&sum);

   printf("Real Part: %d, Img Part: %d\n", sum.real, sum.img); // In main

    return 0;
}