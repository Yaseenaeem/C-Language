#include <stdio.h>
int main(){
    int i, j, size;
    printf("Enter size: ");
    scanf("%d", &size);

    for(i=1; i<=size; i++){
        int num = 1;
        char alph = 'A';
        for(j=1; j<=i; j++){
            if(i%2 != 0){
                printf("%d", num);
                num++;
            }
            else{
                printf("%c", alph);
                alph++;
            }
        }
        printf("\n");
    }
    return 0;
}    