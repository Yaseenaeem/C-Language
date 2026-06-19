#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to concatenate two dynamically allocated strings
char* concatenate(char *dest, char *src) {
    int new_len = strlen(dest) + strlen(src);

    // Attempt to reallocate memory
    char *temp = realloc(dest, new_len + 1);
    if (temp == NULL) {
        printf("Memory Reallocation Failed!\n");
        free(dest);
        return NULL;
    }
    dest = temp;

    // Append src to dest
    strcat(dest, src);

    return dest;
}

int main() {
    char input[200];
    char input2[200];

    printf("Enter first string: ");
    scanf(" %[^\n]", input);

    printf("Enter second string: ");
    scanf(" %[^\n]", input2);

    // Dynamic allocation for first string
    char *str1 = malloc(strlen(input) + 1);
    if (str1 == NULL) {
        printf("Memory Allocation Failed!\n");
        return 1;
    }
    strcpy(str1, input);

    // Dynamic allocation for second string
    char *str2 = malloc(strlen(input2) + 1);
    if (str2 == NULL) {
        printf("Memory Allocation Failed!\n");
        free(str1);
        return 1;
    }
    strcpy(str2, input2);

    // First concatenation
    char *result = concatenate(str1, str2);
    if (result == NULL) return 1;

    printf("\nCurrent Concatenated String: %s\n", result);

    // Repetitive user inputs
    while (1) {
        char newInput[200];

        printf("\nEnter another string to concatenate (or 'Q' to quit): ");
        scanf(" %[^\n]", newInput);

        if (strcmp(newInput, "Q") == 0 || strcmp(newInput, "q") == 0)
            break;

        // Dynamically allocate for newInput
        char *tempStr = malloc(strlen(newInput) + 1);
        if (tempStr == NULL) {
            printf("Memory Allocation Failed!\n");
            free(result);
            return 1;
        }
        strcpy(tempStr, newInput);

        // Append new string to result using reallocate function
        result = concatenate(result, tempStr);
        free(tempStr);

        if (result == NULL) return 1;

        printf("Updated Result: %s\n", result);
    }

    // Final Output
    printf("\nFinal Concatenated String: %s\n", result);

    // Free memory
    free(result);

    return 0;
}
