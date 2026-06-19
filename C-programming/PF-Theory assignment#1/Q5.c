#include <stdio.h>

int main() {
    int counts[10] = {0};   // to count occurrences of digits 0–9
    int num;

    printf("Enter digits (0-9). Enter anything else to stop.\n");

    while (1) {
        printf("Enter a number: ");
        if (scanf("%d", &num) != 1) {
            break;
        }
        if (num >= 0 && num <= 9) {
            counts[num]++;   // increase count for that digit
        } else {
            // if number is not between 0-9, stop
            break;
        }
    }

    // Output Table
    printf("\nNumber\t\tNumber of Occurrences\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t\t\t%d\n", i, counts[i]);
    }

    return 0;
}
