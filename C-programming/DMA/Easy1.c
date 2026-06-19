#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    puts("Enter Size for n: ");
    scanf("%d", &n);

    float* ptr = (float*)malloc(n * sizeof(float));
    float* p = ptr;

    if(ptr == NULL){
        return 1;
    }

    for(int i =0; i<n; i++){
        scanf("%f", &(*ptr));
        ptr++;
    }
    printf("\n");

    float* t = p;

    for(int j=0; j<n; j++){
        printf("%.2f", (*p));
        p++;
    }
    free(t);
    return 0;
}