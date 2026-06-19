#include <stdio.h>
int main(){
    int n;

    printf("Enter the size of array: ");
    scanf("\t%d", &n);

    int arr[n];
    printf("Enter values of array: ");
    for(int i =0; i<n; i++){
        scanf("%d\t", &arr[i]);
    }

    printf("\nOriginal array is: ");
    for(int i =0; i<n; i++){
        printf("%d\t", arr[i]);
    }

    printf("\nNew array is: ");
    for(int i =0; i<n; i++){
        if(arr[i] %2 == 0){
            arr[i] = arr[i] +10;
        }
        else{
            arr[i] = arr[i] * 2;
        }
        printf("%d\t", arr[i]);
    }
    return 0;
}