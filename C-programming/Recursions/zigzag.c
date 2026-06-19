#include <stdio.h>

void zigzag(int num){
    if(num == 0) return;
    printf("%d", num);

    zigzag(num-1);
    printf("%d", num);
    
    zigzag(num-1);
    printf("%d", num);
    // zigzag(num-1);
    // printf("%d", num);
    // zigzag(num-1);
    return; 
}

int main(){
    int num;

    printf("\nENter a number: ");
    scanf("%d", &num);

    zigzag(num);
    return 0 ;
}