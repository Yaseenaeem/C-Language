#include <stdio.h>

int powerfunc(int a, int b, int power, int counta){
    if(counta==b) return power;
    power *= a;
    counta++;
    return powerfunc(a, b, power, counta);
}

int main(){
    int a, b, ans;
    int counta = 1;
    printf("Value for a: ");
    scanf("%d", &a);
    printf("\nValue for b: ");
    scanf("%d", &b);
    int power = a;

    ans = powerfunc(a, b, power, counta);
    printf("%d raised to power %d gives:  %d", a, b, ans);
    return 0;
}