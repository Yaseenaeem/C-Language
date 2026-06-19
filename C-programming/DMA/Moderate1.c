#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter Number Of Students:  ");
    scanf("%d", &n);

    char* ptr = (char*)malloc(n * sizeof(char));
    if(ptr == NULL){
        return 1;
    }

    for(int i =0; i<n; i++){
        printf("\nEnter name of %d student:  ", i+1);
        gets(ptr[i]);
    }
    printf("\n");
    for(int j =0; j<n; j++){
        printf("Name of student %d is:  %[^\n]s\n", j+1, ptr[j]);
    }
    return 0;
}