#include <stdio.h>
int main(){
    int number, num, num2, numbits;
    printf("Enter number 1: ");
    scanf("%d", &num);

    printf("\nEnter number 2: ");
    scanf("%d", &num2);
    
    numbits=0;

    number = num & num2;

    do{
        if(number & 1){
        numbits++;
        }
        number = number >> 1;
    }while(number !=0);

    printf("Number of Common bits are %d", numbits);
    return 0;

}