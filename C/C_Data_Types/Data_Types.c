#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("a char is %ld bytes\n", sizeof(char));
    printf("an int is %ld bytes\n", sizeof(int));
    printf("an float is %ld bytes\n", sizeof(float));
    printf("a double is %ld bytes\n", sizeof(double));
    printf("a short int is %ld bytes\n", sizeof(short int));
    printf("a long int is %ld bytes\n", sizeof(long int));
    printf("a long double is %ld bytes\n", sizeof(long double));


    // Number System Conversions


    printf("1984 in decimal is %d\n", 1984);
    printf("1984 in octal is 0%o\n", 1984);
    printf("1984 in hexadecimal is 0x%x\n", 1984);
    printf("0123 is octal for %d\n", 0123);
    printf("0x12f is hexadecimal for %d\n", 0x12f);
    
    return 0;
}