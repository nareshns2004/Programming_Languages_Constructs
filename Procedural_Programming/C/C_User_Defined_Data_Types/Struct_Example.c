#include <stdio.h>
#include <string.h>
struct Student
{
    char name[100];
    int rollno;
    float cgpa;
};

int main()
{
    struct Student s1,s2,s3;
    s1.rollno = 21;
    s1.cgpa = 8.6;
    strcpy(s1.name, "Naresh Kumar 10th");
    

    printf("Name: %s\nRoll no: %d\nCGPA: %.1f\n\n",s1.name,s1.rollno,s1.cgpa);

    s2.rollno = 17;
    s2.cgpa = 8.2;
    strcpy(s2.name, "Naresh Kumar 12th");

    printf("Name: %s\nRoll No: %d\nCGPA: %.1f\n\n",s2.name,s2.rollno,s2.cgpa);

    s3.rollno = 02;
    s3.cgpa = 7.2;
    strcpy(s3.name, "Naresh Kumar B.E");

    printf("Name: %s\nRoll No: %d\nCGPA: %.1f\n\n",s3.name,s3.rollno,s3.cgpa);

    return 0;
}