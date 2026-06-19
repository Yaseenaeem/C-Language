#include<stdio.h>

int tribo(int n){
    if(n == 2) return 1;
    if( n == 1) return 1;
    if(n == 0) return 0;
    return tribo(n-1) + tribo(n-2) + tribo(n-3);
}

int main(){
    int n;
    printf("Enter nth term to find it's value in tribonacci series: ");
    scanf("%d", &n);

    int nth = tribo(n);
    printf("%d term in tribo series is:  %d", n, nth);
    return 0;
}