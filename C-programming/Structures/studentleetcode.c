#include <stdio.h>

typedef struct student{
    int age;
    char fname[50];
    char lname[50];
    int standard;
} student;

int main(){

    student student;

    printf("Enter age of student: ");
    scanf("%d", &student.age);

    printf("\nEnter first name of student: ");
    scanf(" %[^\n]", student.fname);

    printf("\nEnter Last name Of student:  ");
    scanf(" %[^\n]", student.lname);

    printf("Enter standard of student: ");
    scanf("%d", &student.standard);

    printf("\n%d\t%s\t%s\t%d", student.age, student.fname, student.lname, student.standard);

    return 0;
}