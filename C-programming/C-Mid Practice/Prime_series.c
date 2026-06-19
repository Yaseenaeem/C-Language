#include <stdio.h>
int main(){
    int i, k, prime;
    
    for(i=10; i<=50; i++){
        prime =1;
        for(k=2; k<i; k++){
            if(i % k ==0){
                prime=0;
                break;
                }
        }
        if(prime == 1){
            printf("\n%d is prime", i);
            }
            }
            return 0;
}