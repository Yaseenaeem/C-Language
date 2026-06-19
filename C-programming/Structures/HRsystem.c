#include <stdio.h>
#include <string.h>

typedef struct employee{
    int ID;
    char name[50];
    char designation[50];
    int salary;
} employee;

void displayemployees(employee emp[], int n){
    printf("\nID\t\tName\t\tDesignation\t\tSalary\n");
    for(int i =0; i<n; i++){
        printf("%d\t\t%s\t\t%s\t\t\t%d\n", emp[i].ID, emp[i].name, emp[i].designation, emp[i].salary);
    }
    return;
}

void highest(employee emp[], int n){
    int high = 0;
    int num;
    for(int i=0; i<n; i++){
        if(emp[i].salary > high){
            high = emp[i].salary;
            num = i;
        }
    }
    printf("\n%s earns highest salary: %d", emp[num].name, emp[num].salary);
    return;
}

void searchemployee(employee emp[], int n){
    int sid;
    int found = 0;
    printf("\nEnter ID you want to find: ");
    scanf("%d", &sid);

    for(int i =0; i<n; i++){
        if(emp[i].ID == sid){
        printf("%d\t\t%s\t\t%s\t\t\t%d\n", emp[i].ID, emp[i].name, emp[i].designation, emp[i].salary);
        found = 1;
        break;
        }
    }
    if(found!=1){
        printf("\nID Not Found!");
    }
    return;
}

int main() {
    int n;
    printf("Enter Number of Employees in ABC Company: ");
    scanf("%d", &n);

    employee emp[n];

    for(int  i=0; i<n; i++){
        printf("\nEnter Employee %d ID: ", i+1);
        scanf("%d", &emp[i].ID);

        printf("\nEnter Employee %d Name: ", i+1);
        scanf(" %[^\n]", emp[i].name);
 
        printf("\nEnter Employee %d Designation: ", i+1);
        scanf(" %[^\n]", emp[i].designation);

        printf("\nEnter Employee %d Salary: ", i+1);
        scanf("%d", &emp[i].salary);
        printf("\n");
        }

    displayemployees(emp, n);

    highest(emp, n);

    searchemployee(emp, n);
}