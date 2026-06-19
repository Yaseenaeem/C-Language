#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter num 1: ");
    scanf("%d",&num1);
    printf("\nEnter num 2: ");
    scanf("%d",&num2);

    printf("\nNumbers before swapping are %d and %d", num1, num2);

    num1 = num1^num2;
    num2 = num2 ^ num1;
    num1 = num2 ^ num1;

    printf("\nNumbers after Swapping are %d and %d", num1, num2);
    return 0; 
}