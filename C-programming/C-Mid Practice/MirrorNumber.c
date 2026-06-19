#include <stdio.h>
#include <math.h>
int main(){
    int num, digit, n, rev, sum, intresult;
    float result; 

    printf("Enter number: ");
    scanf("%d", &num);

    n=num;
    rev=0;
    sum=0;
    while(n!=0){
        digit = n %10;
        rev = (rev*10) +digit;
        n/=10;
    }
    printf("\nReverse = %d", rev);
    sum = num + rev;
    printf("\nSum is %d", sum);
    result = sqrt(sum);
    intresult = (int)result;

    if(intresult == result){
        printf("\nIt's a Perfect Square");
    }
    else{
        printf("\nNot a Perfect Square");
    }
    return 0;
}