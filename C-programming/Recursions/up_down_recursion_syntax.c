#include <stdio.h>

void recfun(int num){
    if(num<1) return;
    printf("\n%d", num);

    recfun(num-1);

    printf("\n%d", num);
    return;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    recfun(num);
    return 0;
}