#include <stdio.h>
int main(){
    int i, j, size;

    printf("Enter Size of matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("\nEnter Elements: \n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix: \n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int temp = matrix[0][size-1];

    for(j=size-1; j>0; j--){
        matrix[0][j] = matrix[0][j-1];
    }

    for(i=0; i<size-1; i++){
        matrix[i][0] = matrix[i+1][0];
    }
    for(j=0; j<size-1; j++){
        matrix[size-1][j] = matrix[size-1][j+1];
    }
    for(i=size-1; i>1; i--){
        matrix[i][size-1] = matrix[i-1][size-1];
    }
    matrix[1][size-1] = temp;

    printf("\n");
    printf("Rotated Matrix: \n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}