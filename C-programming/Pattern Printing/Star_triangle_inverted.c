#include <stdio.h>
int main(){

    int i,j,k,size;
    printf("Enter size: ");
    scanf("%d", &size);

    for(i=1; i<=size; i++){
        for(j=1; j<=size-i; j++){
            printf(" ");
            }
            for(k=1; k<=i; k++){
                printf("*");
        }
        printf("\n");
    }
    return 0;
}