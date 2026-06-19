#include <stdio.h>
int main(){ 
    int equal, num1, num2;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    equal = num1 ^ num2;

    if(equal == 0){
        printf("Numbers are equal.");
    }
    else{
        printf("Not Equal.");
    }
    return 0;
    
    

}