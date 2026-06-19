#include <stdio.h>
int main(){
    int num, n, sum, ld, ld2, nop, sum2;
    printf("Enter a Number: ");
    scanf("%d", &num);

    n = num;
    while(n>=10){
        sum=0;
        while(n!=0){
        ld = n % 10;
        sum += ld;
        n/=10;
    }
    n=sum;
    printf("\nSum now is: %d", sum);}

    return 0;
}