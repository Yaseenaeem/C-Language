#include <stdio.h>
 int main(){
    int num, i, factorial, rev, og, ld;
    factorial =1;
    rev = 0;

    printf("Enter number: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        factorial*=i;
    }
    printf("\nFactorial of %d is: %d", num, factorial);

    og = factorial;
    while(og!=0){
        ld = og % 10;
        rev = (rev * 10) + ld;
        og/=10;
    }
    printf("\nReverse is: %d", rev);
    return 0;
    
 }