#include <stdio.h>

int main(){
    int i, j ,size;

    printf("Enter size: ");
    scanf("%d", &size);

    printf("\n");
    for(i=0; i<size; i++){
        int num =1;
        for(j=0; j<=i; j++){
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
    return 0;

}