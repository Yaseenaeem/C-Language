#include <stdio.h>
int main(){

    int num, i, j, size;
    num =1;
    printf("Enter size: ");
    scanf("%d", &size);

    for(i=1; i<=size; i++){
        for(j=1; j<=i; j++){
            printf("%d\t", num);
            num+=2;
        }
        printf("\n");
    }
    return 0;
}