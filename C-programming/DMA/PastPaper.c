#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char concatenate(char result, char input){
    int a = strlen(result) + strlen(input);
    char* tp = (char*) realloc(result, a * sizeof(char));
    strcpy(tp, result);
    strcat(tp, input);

    result = tp;

    return result;
}

int main(){
    char s1[200];
    char s2[200];

    printf("Enter A string: ");
    scanf(" %[^\n]", s1);

    printf("\nEnter 2nd String: ");
    scanf(" %[^\n]", s2);

    int x = strlen(s1);
    int y = strlen(s2);

    char* str1 = (char*) malloc(x * sizeof(char));
    if(str1 == NULL){
        printf("\nMemory Allocation Failed!");
        return 1;
    }
    strcpy(str1, s1);

    char* str2 = (char*) malloc(y * sizeof(char));
    if(str2 == NULL){
        printf("\nMemory Allocation Failed!");
        return 1;
    }
    strcpy(str2, s2);

    int len = x + y;

    char* temp = (char*) realloc(str1, len * sizeof(char));
    if(temp == NULL){
        printf("\nReallocation Failed!");
        break;
    }

    strcpy(temp, str1);
    strcat(temp, str2);

    str1 = temp;

    char *result = str1;
    printf("\nConcatenated String currently is: %s", result);

    while(1){
        char input;
        printf("\nEnter Another String to Concatenate or Q/q to quit: ");
        scanf(" %[^\n]", input);

        if(strcmp(input, Q)==0 || strcmp(input, q)==0){
            break;
        }
        result = concatenate(result, input);
        printf("\nConcated String Till Now:  %s", result);
    }
    printf("\n\nFinal Concatenated String is:  %s", result);

    free(result);
    return 0;
}