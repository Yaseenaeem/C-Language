#include <stdio.h>

int ways(int n){
    if(n < 2){
        return 1;
    }
    return ways(n-1) + ways(n-2);
}

int main(){
    int n;
    printf("Enter Number of steps: ");
    scanf("%d", &n);

    int result = ways(n);
    printf("There are %d ways to climb %d stairs.", result, n);
    return 0;
}