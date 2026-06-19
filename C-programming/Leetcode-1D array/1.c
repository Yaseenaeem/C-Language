#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Running sum: [");

    for(i = 0; i < n; i++) {
        sum = sum + nums[i];  
        printf("%d", sum);
        if(i < n - 1)
            printf(", ");     
    }

    printf("]\n");

    return 0;
}
