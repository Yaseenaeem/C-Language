#include <stdio.h>
int main(){

    int i, j, rows, col;
    printf("Enter rows: ");
    scanf("%d", &rows);

    printf("\nEnter columns: ");
    scanf("%d", &col);

    int arr[rows][col];

    //input of matrix
    printf("\nEnter elements: ");
    for(i=0; i<rows; i++){
        for(j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    //Printing Elements
    printf("\nMatrix is: \n");
    for(i=0; i<rows; i++){
        for(j=0; j<col; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix in wave pattern is: \n");
    for(i=0; i<rows;i++){
        if(i %2 ==0){
            for(j=0; j<col; j++){
                printf("%d", arr[i][j]);
            }
        }
        else{
            for(j=col-1; j>=0; j--){
                printf("%d", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}