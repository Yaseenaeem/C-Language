#include <stdio.h>

int main(){

int i, j;
int size;
int num =1;

printf("Enter size: ");
scanf("%d", &size);

printf("\n");
for(i=0; i<size; i++){
    num =1;
    for(j=0; j<size; j++){
        printf("%d", num);
        num++;
    }
    printf("\n");
    }
    return 0;
}