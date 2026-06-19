#include <stdio.h>
int main(){
    int i, j, row, col;
    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter length: ");
    scanf("%d", &col);

    for(i=1; i<=row; i++){
        for(j=1; j<=col; j++){
            if(i>1 && i<row && j>1 && j<col){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}