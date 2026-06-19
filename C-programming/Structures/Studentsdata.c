#include <stdio.h>
#include <string.h>

int main(){
    typedef struct students{
        char name[50];
        int marks;
        float percentage;
        char grade;
    } students;

    students arr[3];
    for(int i=0; i<3; i++){
        printf("\nEnter Name: ");
        fgets(arr[i].name, 50, stdin);
        printf("\nEnter Marks: ");
        scanf("%d", &arr[i].marks);
        getchar();
        printf("\nEnter Percentage: ");
        scanf("%f", &arr[i].percentage);
        getchar();
        printf("\nEnter Grade: ");
        scanf("%c", &arr[i].grade);
        getchar();
        printf("\n");
    }

    for(int i=0; i<3; i++){
        printf("\nName:  %s", arr[i].name);
        printf("\nMarks:  %d", arr[i].marks);
        printf("\nPercentage:  %.2f",arr[i].percentage);
        printf("\nGrade:  %c", arr[i].grade);
        printf("\n");
    }
    return 0;
}