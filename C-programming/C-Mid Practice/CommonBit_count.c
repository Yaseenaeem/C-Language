#include <stdio.h>
int main(){
    int num1, num2, bit, result;
    bit=0;
    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("\nEnter 2nd number: ");
    scanf("%d", &num2);

    result = num1 & num2;
    
    while(result!=0){
        if(result & 1){
            bit++;
        }
        result = result >> 1;
    }
    printf("\nCommon bits are %d", bit);
    return 0;

}