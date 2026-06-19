#include <stdio.h>
int main(){
    int num, i, mod, sum;
    sum= 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=1; i<num; i++){
        mod=num % i;
        if(mod==0){
            sum+=i;
        }
    }
    if(sum == num){
        printf("A Perfect");
    }
    else{
        printf("Not Perfect");
    }
    return 0;
}