#include <stdio.h>
int main(){
    int i, j, size;
    printf("Enter the size of matrix: ");
    scanf("%d", &size);

    int a1[size][size];
    int b1[size][size];

    //Elements of 1st array
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            scanf("%d", &a1[i][j]);
        }
    }

    printf("\n1st Array: \n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("%d", a1[i][j]);
        }
        printf("\n");
    }

    //Elements of 2nd array
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            scanf("%d", &b1[i][j]);
        }
    }

    printf("\n2nd Array: \n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("%d", b1[i][j]);
        }
        printf("\n");
    }

    int res[size][size];
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            res[i][j] = 
        }
    }

}