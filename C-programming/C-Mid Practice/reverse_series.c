#include <stdio.h>
int main(){
    int i, digit, num, rev;
    for(i=100; i>=90; i--){
        rev=0;
        num=i;
        while(num!=0){
            digit = num %10;
            rev = (rev*10) + digit;
            num/=10;
        }
        printf("%d\n", rev);
    }
    return 0;
}