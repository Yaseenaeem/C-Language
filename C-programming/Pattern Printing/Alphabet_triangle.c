#include <stdio.h>
int main(){
    int i, j, size;
    printf("Enter size: ");
    scanf("%d", &size);

    for(i=0; i<size; i++){
        char alph = 'A';
        for(j=0; j<=i; j++){
            printf("%c", alph);
            alph++;
        }
        printf("\n");
    }
    return 0;
}