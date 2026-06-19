#include <stdio.h>

int sumfunc(int n, int one, int sum){
    if(one > n) return sum;
    sum += one;
   return sumfunc(n, one+1, sum);
}

int main(){
    int sum = 0;
    int n;
    int one = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    int ans = sumfunc(n, one, sum);
    printf("Sum of first %d numbers is:  %d", n, ans);
    return 0;
}