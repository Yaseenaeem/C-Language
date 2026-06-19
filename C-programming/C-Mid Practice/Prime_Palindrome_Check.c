#include <stdio.h>
int main(){
    int i, k, rev, prime, ld, og, result;

    for(i = 2; i <= 100; i++){   
        prime = 1;                //Assuming i as already prime
        for(k = 2; k < i; k++){
            if(i % k == 0){
                prime = 0;        // False condition
                break;            
            }
        }

        if(prime == 1){           
            og = i;
            rev = 0;
            while(og != 0){
                ld = og % 10;
                rev = (rev * 10) + ld;
                og /= 10;
            }

            if(rev == i){         
                result = i;
                printf("Result: %d\n", result);
            }
        }
    }

    return 0;
}
