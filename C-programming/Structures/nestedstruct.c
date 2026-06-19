#include <stdio.h>
#include <string.h>

typedef struct employee{
    char ename[50];
    int salary;
} employee;

typedef struct company{
    char cname[50];
    char location[50];
    employee emp[2];
} company;

int main(){
    company comp[2];
    // strcpy(comp[0].cname, "PWC");
    // strcpy(comp[0].location, "USA");
    // strcpy(comp[0].emp[0].ename, "Yasir");
    // comp[0].emp[0].salary = 250;
    // strcpy(comp[0].emp[1].ename, "Ahmed");
    // comp[0].emp[1].salary = 500;

    // strcpy(comp[1].cname, "Ferguson");
    // strcpy(comp[1].location, "Pakistan");
    // strcpy(comp[1].emp[0].ename, "Saad");
    // comp[1].emp[0].salary = 450;
    // strcpy(comp[1].emp[1].ename, "Zain");
    // comp[1].emp[1].salary = 1000;

    for(int i =0; i<2; i++){
        printf("Enter Company %d name: ", i+1);
        scanf(" %[^\n]", &comp[i].cname);

        printf("\nEnter Company %d location: ", i+1);
        scanf(" %[^\n]", &comp[i].location);

        for(int j =0; j<2; j++){
            printf("\nEnter Employee %d Name of Company %d: ", j+1, i+1);
            scanf(" %[^\n]", &comp[i].emp[j].ename);

            printf("\nEnter Employee %d Salary: ", j+1);
            scanf("%d", &comp[i].emp[j].salary);
        }
 }
    printf("\n\n");
    for(int i =0; i<2; i++){
        printf("Company: %s \nLocation: %s", comp[i].cname, comp[i].location);
        for(int j =0; j<2; j++){
            printf("\nEmployee: %s \nSalary: %d", comp[i].emp[j].ename, comp[i].emp[j].salary);
        }
        printf("\n\n");
    }
    return 0;
}