#include <stdio.h>

int main(){
    int h, l;
    printf("Enter the rows of pattern: ");
    scanf("%d", &h);

    printf("\nEnter length of pattern: \n");
    scanf("%d", &l);


    char star[h][l];
    int i, j;

    for(i=0; i<h; i++){
        for(j=0; j<l; j++){
            star[i][j]='*';
            printf("%c", star[i][j]);
        }
        printf("\n");
    }
    return 0;
}