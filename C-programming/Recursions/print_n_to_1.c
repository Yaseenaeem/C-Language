#include <stdio.h>

void decrease(int num){
    if(num < 1){
        return;
    }
    else{
        printf("\n%d", num);
        decrease(num-1);
    }
    return;
}

int main(){
    int num;
    printf("Enter the number that decreases to 1: ");
    scanf("%d", &num);

    decrease(num);
    return 0;
}