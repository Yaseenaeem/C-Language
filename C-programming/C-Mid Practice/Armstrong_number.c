#include <stdio.h>
#include <math.h>
int main() {
    int n, num, original, digit, sum, count;
    sum=0;
    count=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count digits
    n=num;
    while(n!= 0) {
        count++;
        n /= 10;
    }

    // Find sum of digits^count
    n=num;
    while(n!= 0) {
        digit = n % 10;
        sum += (int)(pow(digit, count)+0.5);
        n/= 10;
    }

    if(sum == original) {
        printf("%d is an Armstrong Number.", original);
    } else {
        printf("%d is not an Armstrong Number.", original);
    }

    return 0;
}
