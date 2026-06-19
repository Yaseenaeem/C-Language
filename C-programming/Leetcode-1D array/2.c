#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    int nums[2 * n];

    printf("Enter %d elements: ", 2 * n);
    for(i = 0; i < 2 * n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Output: [");
    for(i = 0; i < n; i++) {
        printf("%d, %d", nums[i], nums[i + n]);
        if(i < n - 1)
            printf(", ");
    }
    printf("]\n");

    return 0;
}
