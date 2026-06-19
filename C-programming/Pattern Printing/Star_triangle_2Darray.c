#include <stdio.h>

int main(){
    int rows, col;
    int i, j;
    printf("Enter rows: ");
    scanf("%d", &rows);

    col = 1;
    char star[rows][col];
    for(i=0; i<rows; i++){
        for(j=0; j<col; j++){
            star[i][j] = '*';
            printf("%c", star[i][j]);
        }
        printf("\n");
        col++;
    }
    
    return 0;    
}