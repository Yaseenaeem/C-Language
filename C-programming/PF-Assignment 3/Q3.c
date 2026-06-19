#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char designation[50];
    float salary;
};

void inputEmployees(struct Employee emp[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Designation: ");
        scanf("%s", emp[i].designation);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
}

void displayEmployees(struct Employee emp[], int n) {
    printf("\n---------------------------------------------------------------\n");
    printf("ID\tName\t\tDesignation\tSalary\n");
    // printf("---------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%-10s\t%-12s\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].designation,
               emp[i].salary);
    }

    printf("---------------------------------------------------------------\n");
}

void findHighestSalary(struct Employee emp[], int n) {
    int index = 0;

    for (int i = 1; i < n; i++) {
        if (emp[i].salary > emp[index].salary) {
            index = i;
        }
    }

    printf("\nEmployee With Highest Salary:\n");
    printf("ID: %d\n", emp[index].id);
    printf("Name: %s\n", emp[index].name);
    printf("Designation: %s\n", emp[index].designation);
    printf("Salary: %.2f\n", emp[index].salary);
}

void searchEmployee(struct Employee emp[], int n) {
    int choice;
    printf("\nSearch by:\n1. ID\n2. Name\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int id;
        printf("Enter Employee ID: ");
        scanf("%d", &id);

        for (int i = 0; i < n; i++) {
            if (emp[i].id == id) {
                printf("\nEmployee Found:\n");
                printf("ID: %d\nName: %s\nDesignation: %s\nSalary: %.2f\n",
                       emp[i].id, emp[i].name, emp[i].designation, emp[i].salary);
                return;
            }
        }
        printf("\nEmployee not found.\n");
    }

    else if (choice == 2) {
        char name[50];
        printf("Enter Name: ");
        scanf("%s", name);

        for (int i = 0; i < n; i++) {
            if (strcmp(emp[i].name, name) == 0) {
                printf("\nEmployee Found:\n");
                printf("ID: %d\nName: %s\nDesignation: %s\nSalary: %.2f\n",
                       emp[i].id, emp[i].name, emp[i].designation, emp[i].salary);
                return;
            }
        }
        printf("\nEmployee not found.\n");
    }
}

void giveBonus(struct Employee emp[], int n, float threshold) {
    for (int i = 0; i < n; i++) {
        if (emp[i].salary < threshold) {
            emp[i].salary = emp[i].salary + (emp[i].salary * 0.10);
        }
    }
}

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    inputEmployees(emp, n);

    displayEmployees(emp, n);

    findHighestSalary(emp, n);

    searchEmployee(emp, n);

    giveBonus(emp, n, 50000);

    printf("\nAfter Bonus Update:\n");
    displayEmployees(emp, n);

    return 0;
}
