#include <stdio.h>
int main(){
    int i, n;
    float sum;
    sum = 0;

    printf("Choose terms of series: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sum+= 1.0000 / i;
        printf("\n1/%d", i);
    }
    printf("\n\nSum of series is: %f", sum);
    return 0;
}