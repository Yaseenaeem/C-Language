#include <stdio.h>
int main(){
    int num, i, sum;
    sum=0;

    printf("ENTER THE NUMBER: ");
    scanf("%d", &num);

    i=1;
    while(i < num){
        if(num % i == 0){
            sum+=i;
        }
        i++;
    }
    if(sum == num){
        printf("A Perfect Number");
    }
    else{
        printf("Not Perfect");
    }
    return 0;
}