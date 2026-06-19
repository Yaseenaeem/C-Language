//Q.) Write a C program in which take an integer number as input your work is to determine if the number is XNumber. 
//XNumber is number if sum of the squares of digits of number till 1 takes less than 10 iteration 
// Eg 23: is xNumber because 2^2+3^2=13, 1^2+3^2=10, 1^2+0^2=1 (3 steps)

#include <stdio.h>
#include <math.h>

int main() {
    int num, n, digit, sum, i;

    printf("Enter a number to check if it's XNumber: ");
    scanf("%d", &num);

    n = num;  // keep original number
    i = 0;

    // Repeat until you reach 1 or exceed 10 iterations
    while (n != 1 && i < 10) {
        sum = 0; // reset for each iteration

        // sum of squares of digits
        while (n != 0) {
            digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        n = sum; // new number becomes this sum
        i++;     // count iteration
    }

    if (n == 1 && i < 10)
        printf("It's an XNumber (reached 1 in %d steps)\n", i);
    else
        printf("Not an XNumber (took %d steps)\n", i);

    return 0;
}
