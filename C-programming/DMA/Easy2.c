#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    puts("Enter Number of Students: ");
    scanf("%d", &n);

    int* ptr = (int*)calloc(n, sizeof(int));
    if(ptr == NULL){
        return 1;
    }

    for(int i =0; i<n; i++){
        printf("\nMarks of student %d: ", i+1);
        scanf("%d", &ptr[i]);
    }

    int sum = 0;
    for(int j =0; j<n; j++){
        sum+=ptr[j];
    }

    float average = (float)sum/n;
    printf("\nAverage Marks are:  %.2f", average);
    free(ptr);

    return 0;
}