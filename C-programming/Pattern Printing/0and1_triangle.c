#include <stdio.h>
int main(){
    int i,j,size;
    int a;
    printf("Enter size: ");
    scanf("%d", &size);

    for(i=1; i<=size; i++){
            if(i %2 != 0){
                a = 1;
            }else{
                a = 0;}
        for(j=1; j<=i; j++){
            printf("%d", a);
            if(a == 0){
                a = 1;
            }
            else{
                a =0;
            }
        }
        printf("\n");
    }
    return 0;
}