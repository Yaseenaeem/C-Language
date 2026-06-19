#include <stdio.h>

void totalcandidates(int data[50][4], float gpa[50]){
    int count = 0;

        for(int i=0; i<50; i++){
            if(gpa[i] > 3.0 && data[i][1] >50){
                count++;
            }
        }

        printf("\nTotal Candidates with 3.0+ Gpa and 50+ score in analytical test are: %d", count);
        return;
}

void percentagecandidates(int data[50][4], int salarydemand[50]){
        int x, y, cscore;
        int count = 0;
        cscore = 0;

        printf("\nEnter X: ");
        scanf("%d", &x);

        printf("\nEnter Y: ");
        scanf("%d", &y);

        for(int i=0; i<50; i++){
            cscore = 0;
            for(int j=1; j<4; j++){
                cscore = cscore + data[i][j];
            }
            if(cscore > x && salarydemand[i] < y){
                count++;
            }
        }
    float pcand = (count/50.0) * 100;
    printf("\nPercentage of candidates with cumulative score higher than %d and salary lower than %d are: %.2f", x, y, pcand);
    return;
}

void average(int salarydemand[50]){
    float average = 0;
    int total = 0;

    for(int i=0; i<50; i++){
        total += salarydemand[i];
    }

    average = total/50.0;
    printf("\nThe Average Salary Demand throughout Candidates is: %.2f", average);
    return;
}

int main(){

    int data[50][4];
    float gpa[50];
    int salarydemand[50];
    int choice;

    while(1){
        printf("Choose and option: ");
        scanf("%d", &choice);
    switch(choice){

        case 1:
        totalcandidates(data, gpa);
        break;

        case 2:
        percentagecandidates(data, salarydemand);
        break;

        case 3:
        average(salarydemand);
        break;

        }
    }
    return 0;
}