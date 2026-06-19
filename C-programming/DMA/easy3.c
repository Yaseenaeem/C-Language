#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter Size of the array:  ");
    scanf("%d", &n);

    int* ptr = (int*)malloc(n * sizeof(int));
    if(ptr == NULL){
        return 1;
    }

    // Input original n values
    for(int i = 0; i < n; i++){
        printf("Enter Value %d: ", i+1);
        scanf("%d", &ptr[i]);
    }

    printf("\nOriginal values:\n");
    for(int j = 0; j < n; j++){
        printf("Value %d is: %d\n", j+1, ptr[j]);
    }

    // Extend memory
    ptr = realloc(ptr, 2*n*sizeof(int));
    if(ptr == NULL){
        return 2;
    }

    // Input extra n values
    printf("\nEnter %d more values (extended):\n", n);
    for(int i = n; i < 2*n; i++){
        printf("Enter Value %d: ", i+1);
        scanf("%d", &ptr[i]);
    }

    // Print all 2n values
    printf("\nFinal values after extension:\n");
    for(int i = 0; i < 2*n; i++){
        printf("Value %d is: %d\n", i+1, ptr[i]);
    }

    free(ptr);
    return 0;
}
