#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Gomove{
    int Id;
    char name[50];
    float earning;
    int rides;
} gomove;

int main(){
    int active;
    printf("Enter Number of Active drivers today: ");
    scanf("%d", &active);

    gomove* driver = (gomove*) malloc(active * sizeof(gomove));
    if(driver == NULL){
        printf("\nmemory allocation failed!");
        return 1;
    }

    for(int i =0; i<active; i++){
        printf("\nEnter ID of Driver %d: ", i+1);
        scanf("%d", &driver[i].Id);
        printf("\nEnter Name: ");
        scanf(" %[^\n]", driver[i].name);
        printf("\nEnter Driver's Earning total of day: ");
        scanf("%f", &driver[i].earning);
    }

    printf("\n");
    for(int i =0; i<active; i++){
        printf("\nNum of rides driver %d completed today: ", i+1);
        scanf("%d", &driver[i].rides);

        float* arr = (float*) malloc(driver[i].rides * sizeof(float));
        driver[i].earning = 0;
        for(int j=0; j<driver[i].rides; j++){
            printf("\nEnter the earning of ride %d: ", j+1);
            scanf("%f", &arr[j]);

            driver[i].earning += arr[j];
        }

        free(arr);
    }
    float highest = 0.0;
    int n;
    for(int i=0; i<active; i++){
        if(driver[i].earning > highest){
            highest = driver[i].earning;
            n = i;
        }
    }
    printf("\n\nHighest Earning Driver Is: %s", driver[n].name);

    float lowest = highest;
    int k;
    for(int i =0; i<active; i++){
        if(driver[i].earning < lowest){
            lowest = driver[i].earning;
            k = i;
        }
    }
    printf("\nLowest Earning Driver Is: %s", driver[k].name);

    float sum = 0.0;
    for(int i =0; i<active; i++){
        sum += driver[i].earning;
    }

    float average  = sum / active;
    printf("\n\nAverage Earning Of All Drivers Today is: %.2f", average);

    printf("\nDrivers Who Earned Above Average:");
    for(int i=0; i<active; i++){
        if(driver[i].earning > average){
            printf("\n%s", driver[i].name);
        }
    }

    
}