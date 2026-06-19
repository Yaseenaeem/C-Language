#include<stdio.h>
#include<string.h>

int main(){
    char grade[5][4];
    // // Subject 1 = Maths
    // Subject 2 = English
    // SUb 3 = Urdu
    // Sub 4 = Cs

    for(int i =0; i<5; i++){
        for(int j =0; j<4; j++){
            printf("\nEnter grade of student %d subject %d: ", i+1, j+1);
            scanf(" %c", &grade[i][j]);
        }
    }

    printf("\n");
    printf("\nStudent\t\tSub 1\t\tSub 2\t\tSub 3\t\t Sub 4\t\tAverage\n");
    for(int i =0; i<5; i++){
        printf("%d\t\t", i+1);
        int total = 0;
        for(int j =0; j<4; j++){
            printf("%c\t\t", grade[i][j]);

            if(grade[i][j] == 'A') total += 4;
            else if(grade[i][j] == 'B') total += 3;
            else if(grade[i][j] == 'C') total += 2;
            else if(grade[i][j] == 'D') total += 1;
            else total += 0;   
        }

        float avg = total / 4.0;
        printf("%.2f\n", avg);
        }

        // A = 80-100
        // B = 65-79
        // C = 50-64
        // D = 30-49
        // E = 10-29
        // F = 0-9
    int count = 0;
        for(int i =0; i<5; i++){
            if(grade[i][0] == 'A'){
                count++;
            }
        }

        printf("\n\n%d students have scored greater than 80 in Maths.", count);
    return 0;
}