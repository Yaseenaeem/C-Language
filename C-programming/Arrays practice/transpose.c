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
    int temp;
    for(j=0; j<col; j++){
        for(i=0; i<row; i++){
            temp = matrix[i][j];
         matrix[j][i] = matrix[i][j];
         matrix[i][j] = temp;
        }
    }

    for(i=0; i<col; i++){
        for(j=0; j<row; j++){
         printf("%d ", matrix[i][j]); 
        }
        printf("\n");
    }

    
    return 0;
}