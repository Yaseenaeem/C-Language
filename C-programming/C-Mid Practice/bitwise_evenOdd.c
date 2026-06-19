#include <stdio.h>
int main(){
    int num, bit, result;
    bit = 1;
    printf("Enter a number and check if it's Odd or Even: ");
    scanf("%d", &num);

    result = num & bit;
    if(result & 1){
        printf("%d is Odd", num);
    }
    else{
        printf("%d is Even", num);
    }
    return 0;


}