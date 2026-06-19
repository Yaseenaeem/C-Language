#include <stdio.h>
int main(){
    int row, col, i, j;
    printf("Enter rows; ");
    scanf("%d", &row);
    printf("Enter Columns: ");
    scanf("%d", &col);

    int matrix[row][col];

    printf("\nEnter elements of matrix: ");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix Is: \n");
     for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

//Transpose
    for(j=0; j<col; j++){
        for(i=0; i<row; i++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}