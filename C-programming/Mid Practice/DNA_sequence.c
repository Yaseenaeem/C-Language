#include <stdio.h>
#include <string.h>

int main(){
    char dna[20];
    int i;

    printf("Enter your dna: ");
    for(i=0; i<20; i++){
        scanf(" %c", &dna[i]);
    }

    printf("\nA: ");
    for(i=0; i<20; i++){
        if(dna[i] == 'A'){
            printf("*");
        }
    }

    printf("\nG: ");
    for(i=0; i<20; i++){
        if(dna[i] == 'G'){
            printf("*");
        }
    }


    printf("\nC: ");
    for(i=0; i<20; i++){
        if(dna[i] == 'C'){
            printf("*");
        }
    }


    printf("\nT: ");
    for(i=0; i<20; i++){
        if(dna[i] == 'T'){
            printf("*");
        }
    }

    return 0;
}