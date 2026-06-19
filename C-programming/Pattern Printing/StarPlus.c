#include <stdio.h>
int main(){
    int i, j, size;

    printf("Enter size (Odd digit): ");
    scanf("%d", &size);

    if(size %2 == 0){
        printf("Enter an Odd number!");
        return 0;
        }

    for(i=1; i<=size; i++){
            for(j=1; j<=size; j++){
                if(i == (size+1)/2 || j==(size+1)/2){

                printf("*");}
            
        else{
            printf(" ");
        }
            }
        printf("\n");
            
    }
    return 0;
}