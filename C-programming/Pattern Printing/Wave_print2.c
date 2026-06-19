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
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    //Column wise printed wave matrix
    for(j=0; j<col; j++){
        if(j %2 != 0){
            for(i)
        }
    }
}    