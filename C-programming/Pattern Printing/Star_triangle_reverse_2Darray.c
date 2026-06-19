#include <stdio.h>
int main(){

    int rows, i, j;
    int col;

    printf("Enter rows: ");
    scanf("%d", &rows);

    col = rows;
    char star[rows][col];
    for(i=0; i<rows; i++){
        for(j=0; j<col; j++){
            star[i][j] = '*';
            printf("%c", star[i][j]);
        }
        printf("\n");
        col--;
    }
    return 0;

}