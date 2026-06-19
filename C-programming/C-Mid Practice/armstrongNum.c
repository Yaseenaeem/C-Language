#include <stdio.h>
#include <math.h>
int main(){
    int num, sum, count, dig1, dig2, original, next;
    sum=0;
    count=0;

    printf("Enter The Number: ");
    scanf("%d", &num);

    original = num;
    while(original !=0 ){
        dig1 = original % 10;
        count++;
        original = original/10;
    }

    next = num;
    while(next!=0){
        dig2 = next % 10;
        sum = sum + (int)pow(dig2,count);
        next/= 10; 
    }
    if(sum == num){
        printf("Armstrong Number");
    }
    else{
        printf("Not Armstrong");
    }
    return 0;

}