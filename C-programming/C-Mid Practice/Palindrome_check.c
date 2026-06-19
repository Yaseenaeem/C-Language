#include <stdio.h>
int main(){
    int num, digit, rev, og;
    rev = 0;

    printf("Enter A Number: ");
    scanf("%d", &num);

    og = num;
    while(og!=0){
        digit = og % 10;
        rev = (rev*10) + digit;
        og/=10;
    }
    if(rev == num){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;

}