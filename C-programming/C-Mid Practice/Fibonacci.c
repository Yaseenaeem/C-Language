#include <stdio.h>
int main(){
    int i, nt, prev1, prev2, series;

    prev1 = 0;
    prev2 = 1;
    series = 0;

    printf("Enter number of terms: ");
    scanf("%d", &nt);

    printf("0");
    printf("\n-1");

    for(i=3; i<=nt; i++){
        prev1*=-1;
        series = prev1 + prev2;
        series *=-1;
        printf("\n%d", series);

        prev1 = prev2;
        prev2 = series;
        }
        return 0;
}