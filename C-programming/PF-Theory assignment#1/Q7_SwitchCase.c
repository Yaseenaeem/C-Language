#include <stdio.h>

int main() {
    int value;
    printf("Enter a value 1-7: ");
    scanf("%d", &value);

    switch(value){
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default:
        printf("Value out of range.");
    }
    return 0;
}