#include <stdio.h>

int main(){
    int size;
    int i, j;
    printf("Enter Size: ");
    scanf("%d", &size);

    for(i=0; i<size; i++){
        for(j=0; j<=i; j++ ){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}