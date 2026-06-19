#include <stdio.h>

void push(int stack[], int *top, int n) {
    int value;
    if (*top == n) {
        printf("\nStack Overflow! Cannot push more elements. ");
    } 
    else {
        printf("\nEnter value to push: ");
        scanf("%d", &value);
        stack[*top] = value; 
        (*top)++;              
        printf("\n%d pushed into stack.", value);
    }
    return;
}

void pop(int stack[], int *top) {
    if (*top == 0) {
        printf("\nStack Underflow! No element to pop.");
    }
    else {
        (*top)--;  // move top down to remove element
        printf("\n%d popped from stack.", stack[*top]);
    }
    return;
}

void peek(int stack[], int top) {

    printf("\nTop element is: %d", stack[top - 1]);
    
    return;
}

void display(int stack[], int top) {
    if (top == 0) {
        printf("\nStack is empty.");
    }
    else {
        printf("\nStack elements (top to bottom): ");
        for (int i = top - 1; i >= 0; i--) {
            printf("\n%d", stack[i]);
        }
    }
    return;
}

int main() {
    int n;
    printf("Enter the size of stack: ");
    scanf("%d", &n);

    int stack[n];
    int top = 0;
    int choice;

    while (1) {
        printf("\nChoose an option from Menu: \n1. Push \n2. Pop \n3. Peek \n4. Display \n5. Exit Program \n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push(stack, &top, n);
                break;


            case 2:
                pop(stack, &top);
                break;


            case 3:
                peek(stack, top);
                break;


            case 4:
                display(stack, top);
                break;


            case 5:
                printf("\nExiting Program!");
                return 0;
        }
    }
    
    return 0;
}
