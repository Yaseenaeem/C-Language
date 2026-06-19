#include <stdio.h>

int main(){
    int size, i, j;
    printf("Enter size: ");
    scanf("%d", &size);

    for(i=0; i<size; i++){
        int num = 1;
        for(j=0; j<=i; j++){
            printf("%d", num);
            num+=2;
        }
        printf("\n");
    }
    return 0;
}