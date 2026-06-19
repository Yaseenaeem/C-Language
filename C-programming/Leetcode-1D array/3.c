#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Replace even to 0 and odd to 1
    for(i = 0; i < n; i++) {
        if(nums[i] % 2 == 0)
            nums[i] = 0;
        else
            nums[i] = 1;
    }

    // Sorting
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(nums[i] > nums[j]) {
                temp = nums[i];         // Bubble Sort
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    printf("Output: [");
    for(i = 0; i < n; i++) {
        printf("%d", nums[i]);
        if(i < n - 1)
            printf(", ");
    }
    printf("]\n");

    return 0;
}
