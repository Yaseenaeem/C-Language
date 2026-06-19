#include <stdio.h>
int main(){
    int size, i, j;
    printf("Enter size; ");
    scanf("%d", &size);
    /*printf("Enter Columns: ");
    scanf("%d",  size);*/

    int matrix[size][size];

    printf("\nEnter elements of matrix: ");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix Is: \n");
     for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Transpose
    int temp;
    int transpose[size][size];

   for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            transpose[i][j] = matrix[j][i];
        }
   }
   /* for(i=0; i size, i++){
        for(j=0; j<size; j++){
         printf("%d ", matrix[i][j]); 
        }
        printf("\n");
    }*/
    int mid = (size+1)/2;
    for(i=0; i<size; i++){
        for(j=0; j<mid; j++){
            temp = transpose[i][j];
            transpose[i][j] = transpose[i][size- j -1];
            transpose[i][size - j -1] = temp;
        }
    }

    printf("\nRotated matrix: \n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}