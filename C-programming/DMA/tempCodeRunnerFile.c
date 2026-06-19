#include <stdio.h>
#include <stdlib.h>

int main(){
    int n[3];
    int **ptr = (int**) malloc(3 * sizeof(int*));

    for(int i=0; i<3; i++){
        printf("Enter Number of colums for row %d: ", i+1);
        scanf("%d", &n[i]);
        ptr[i] = (int*) malloc(n[i] * sizeof(int));

        for(int j=0; j<n[i]; j++){
            ptr[i][j] = i+1;
        }
        printf("\n");
    }

    for(int i=0; i<3; i++){
        printf("Row %d -> ", i+1);
        for(int j =0; j<n[i]; j++){
            printf("%d\t", ptr[i][j]);
        }
        printf("\n");
    }
    return 0;
}