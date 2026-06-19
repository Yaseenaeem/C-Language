#include <stdio.h>
int main(){

    int row, colum;
    printf("\nEnter the rows of array: ");
    scanf("%d", &row);

    printf("\nEnter the Columns of array: ");
    scanf("%d", &colum);    

    int arr[row][colum];
    printf("\nEnter Values (Only 1 and 0) for 2D Array ");
    for(int i=0; i<row; i++){
        for(int j=0;j<colum; j++){
            printf("\nValue at Index (%d, %d): ", i, j); 
            scanf("%d", &arr[i][j]);
            if(arr[i][j] !=1 && arr[i][j] !=0){
                printf("Re-Enter.");
                return 0;
            }
        }
    }

    printf("\nThe 2D Array is: \n");
    for(int i=0; i<row; i++){
        for(int j=0;j<colum; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    int count;
    int count1 = 0;
    int maxRow;
    for(int i=0; i<row; i++){
        count = 0;
        for(int j=0;j<colum; j++){
            if(arr[i][j] == 1)
            count++;
        }
        printf("\nTotal 1's in row %d are: %d", i+1, count);
        if(count > count1){
            count1 = count;
            maxRow = i+1;
        }
    }
    printf("\nRow With maximum 1 is: %d", maxRow); 

    return 0;
}