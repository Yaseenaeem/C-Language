#include <stdio.h>
int main(){
    int num1, num2, result, bit;
    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("\nEnter num2: ");
    scanf("%d", &num2);

    result = num1 & num2;
    while(result !=0){
        if(result & 1){
            bit =1;
            }
        result  = result >> 1;
    }
    if(bit ==1){
        printf("Common Bit Exist");
    }
    else{
        printf("No Common Bit");
        }
        return 0;
}