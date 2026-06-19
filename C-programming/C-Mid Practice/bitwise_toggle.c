#include <stdio.h>
int main(){
    int num, bit, result;
    printf("Enter a number: ");
    scanf("%d",&num);

    bit=4; //0100
    result = num ^ bit; //toggles 3rd bit since 4 only have 3rd bit on
    printf("%d after 3rd bit toggles is: %d", num, result);
    return 0;

}