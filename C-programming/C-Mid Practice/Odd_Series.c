#include <stdio.h>
int main(){
    int i, odd;
    for(i=50; i>=0; i--){
        odd = i % 2;
        if(odd !=0){
            printf("\n%d",i);
        }
    }
    return 0;
}