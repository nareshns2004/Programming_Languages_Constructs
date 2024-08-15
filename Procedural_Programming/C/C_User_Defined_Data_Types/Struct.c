#include <stdio.h>
#include <string.h>

struct student
{
    int age;
    char name[100];
    float marks;

};

int main()
{
    struct student s1;
    s1.age = 28;
  //  s1.name = "Naresh Kumar";
    strcpy(s1.name, "Naresh Kumar");
    s1.marks = 76.2;

    printf("%d \n%s \n%.1f",(s1.age),(s1.name),(s1.marks));
    return 0;
}