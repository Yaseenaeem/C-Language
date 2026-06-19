#include <stdio.h>

void Increase(int num, int n){
    if(n > num){
        return;
    }
    else{
        printf("\n%d", n);
        Increase(num, n+1);
    }
    return;
}

int main(){
    int num;
    int n = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    Increase(num, n);
    return 0;
}