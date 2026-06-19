#include <stdio.h>

int main() {
    float x, y;
    printf("Enter the coordinates you want to check: ");
    scanf("%f %f", &x, &y);

    if(x > 0 && y >0) {
        printf("The point (%.2f, %.2f) lies in Quadrant I", x, y);
    }
    else if(x < 0 && y > 0){
        printf("The point (%.2f, %.2f) lies in Quadrant II", x,y);
    }
    else if(x < 0 && y<0){
        printf("The point (%.2f,%.2f) lies in Quadrant III", x, y);
    }
    else if(x >0 && y <0){
        printf("Point (%.2f,%.2f) lies in Quadrant IV", x, y);
    }
     else if (x == 0) {
        printf("The point (%.2f, %.2f) lies on the Y-axis\n", x, y);
    }
    else if (y == 0) {
        printf("The point (%.2f, %.2f) lies on the X-axis\n", x, y);
    }
    else if(x == 0 && y==0){
        printf("The point (%.2f,%.2f) is origin", x,y);
    }
    return 0;
}