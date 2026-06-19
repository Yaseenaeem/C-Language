#include <stdio.h>
int main(){

    int row, colum;
    int sum;
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

    for(int i=0; i<row; i++){
        for(int j=0;j<colum; j++){
            printf("\nValue at Index (%d, %d) is: %d \n", i, j, arr[i][j]);
        }
    }

    int maxSum = 0;
    int maxRow;
    for(int i=0; i<row; i++){
        sum = 0;
        for(int j=0;j<colum; j++){
            sum = sum + arr[i][j];
        }
        printf("\nSum of row %d is: %d", i, sum);
        if(sum > maxSum){
            maxSum = sum;
            maxRow = i;
        }
    }
    printf("\nRow With maximum sum is: %d", maxRow); 

    return 0;
}