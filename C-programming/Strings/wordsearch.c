#include<stdio.h>
#include<string.h>

int main(){
    char word[3][5] = {{'B', 'I', 'R', 'D'},
                        {'D', 'O', 'G'},
                        {'C', 'A', 'T'}};
    char check[5];

    printf("\nEnter a word to check in 1st row: ");
    scanf(" %[^\n]", check);

    if(strstr(word[0], check)!=NULL){
        printf("\nWord Exists.");
    }
    else{
        printf("\nDoes not exist.");
    }

    char c;
    int countc = 0;
    printf("\nEnter a character to check it's occurances in the grid: ");
    scanf(" %c", &c);
    for(int i =0; i<3; i++){
        for(int j =0; j<5; j++){
            if(word[i][j] == c){
                countc++;
            }
        }
    }

    printf("\nThe character %c occurs %d times in grid.", c, countc);

    char new[5];
    for(int i =0; i<3; i++){
            new[i] = word[i][0];
    }
    printf("\nNew String is: ");
    for(int i =0; i<3; i++){
        printf("%c", new[i]);
    }

    return 0;
}
