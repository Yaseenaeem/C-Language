#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_CAPACITY 2
#define MAX_LINE 1000  

// Insert a line at given index
void insertLine(char ***lines, int *count, int *capacity, int index, char *text) {
    if (index < 0 || index > *count) {
        printf("Invalid index!\n");
        return;
    }

    // Expand array if needed
    if (*count >= *capacity) {
        int newCap = (*capacity) * 2;
        char **temp = realloc(*lines, sizeof(char*) * newCap);
        if (!temp) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
        *lines = temp;
        *capacity = newCap;
    }

    // Shift pointers to make space
    for (int i = *count; i > index; i--) {
        (*lines)[i] = (*lines)[i - 1];
    }

    // Allocate exact memory for the new line
    int len = strlen(text);
    (*lines)[index] = (char*) malloc(len + 1);
    if (!(*lines)[index]) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    strcpy((*lines)[index], text);
    (*count)++;
}

// Delete line at given index
void deleteLine(char **lines, int *count, int index) {
    if (index < 0 || index >= *count) {
        printf("Invalid index!\n");
        return;
    }

    free(lines[index]);

    // Shift pointers to fill the gap
    for (int i = index; i < *count - 1; i++) {
        lines[i] = lines[i + 1];
    }
    (*count)--;
}

// Print all lines
void printAllLines(char **lines, int count) {
    for (int i = 0; i < count; i++) {
        printf("%d: %s\n", i + 1, lines[i]);
    }
}

// Free all allocated memory
void freeAll(char **lines, int count) {
    for (int i = 0; i < count; i++) {
        free(lines[i]);
    }
    free(lines);
}

int main() {
    int capacity = INITIAL_CAPACITY;
    int count = 0;
    char **lines = (char**) malloc(sizeof(char*) * capacity);
    if (!lines) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    char input[MAX_LINE];
    int choice, index;

    while (1) {
        printf("\n1: Insert line\n2: Delete line\n3: Print all lines\n4: Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) break;

        // clear input buffer
        while (getchar() != '\n');

        if (choice == 1) {
            printf("Enter position to insert (1-%d): ", count + 1);
            scanf("%d", &index);
            while (getchar() != '\n');
            printf("Enter text: ");
            fgets(input, MAX_LINE, stdin);
            input[strcspn(input, "\n")] = 0; 

            insertLine(&lines, &count, &capacity, index - 1, input);
        }
        else if (choice == 2) {
            printf("Enter line number to delete (1-%d): ", count);
            scanf("%d", &index);
            while (getchar() != '\n');

            deleteLine(lines, &count, index - 1);
        }
        else if (choice == 3) {
            printAllLines(lines, count);
        }
        else if (choice == 4) {
            break;
        }
        else {
            printf("Invalid choice!\n");
        }
    }

    freeAll(lines, count);
    printf("Memory freed. Exiting.\n");
    return 0;
}
