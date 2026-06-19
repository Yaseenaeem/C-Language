#include <stdio.h>
int main() {
    int n, i, triangular;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        triangular = i * (i + 1) / 2;
        printf("%d ", triangular);
    }

    return 0;
}
