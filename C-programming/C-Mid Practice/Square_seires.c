#include <stdio.h>
#include <math.h>

int main(){
    int num, i, sum, result;

    sum=0;
    i=1;
    while(i<=20){
        sum = sum + (i*i);
        i++;
    }
    printf("\nSum is: %d", sum);
    return 0;
}