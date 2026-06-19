#include <stdio.h>
int main(){

    int row, colum;
    printf("\nEnter the rows of array: ");
    scanf("%d", &row);

    printf("\nEnter the Columns of array: ");
    scanf("%d", &colum);    

    int arr[row][colum];
    printf("\nEnter Values for 2D Array ");
    for(int i=0; i<row; i++){
        for(int j=0;j<colum; j++){
            printf("\nValue at Index (%d, %d): ", i, j); 
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe 2D Array is: \n");
    for(int i=0; i<row; i++){
        for(int j=0;j<colum; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}