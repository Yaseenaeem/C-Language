#include <stdio.h>
#include <stdlib.h>

void player1(char board[7][7]){
    int row, col;
    printf("\nPlayer1! which (row, column) you wish to enter disc: ");
    scanf("%d  %d", &row, &col);

    board[row][col] = '*';

    printf("\n---------------x Grid x---------------\n\n");
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            printf("%c", board[i][j]);
        }
        printf("\n");
    }

    //Win Check Horizontal
    for(int i=0; i<7; i+=2){
        if(board[i][0] == '*' && board[i][2] == '*' && board[i][4] == '*' && board[i][6] == '*'){
            printf("\nPlayer1 Wins!");
            exit(0);
        }
    }

    //Win check vertical
    for(int i=0; i<7; i+=2){
        if(board[0][i] == '*' && board[2][i] == '*' && board[4][i] == '*' && board[6][i] == '*'){
            printf("\nPlayer1 Wins!");
            exit(0);
        }
    }

    //Win Check diagonal (left -> right)
    int out = 0;
    for(int i=0;  i<7; i+=2){
        for(int j=0; j<7; j+=2){
            if(board[i][j] == '*' && i== j){
                out++;
            }
        }
        if(out == 4){
            printf("\nPlayer1 Wins!");
            exit(0);
        }
    }

    //Win check (Right -> Left) diagonal
    int count = 0;
    for(int i=0; i<7; i+=2){
        for(int j=6; j>=0; j-=2){
            if(board[i][j] == '*' && i+j == 6){
                count++;
            }
        }
        if(count==4){
            printf("\nPlayer1 Wins!");
            exit(0);
        }
    }
    return;
}


void player2(char board[7][7]){
    int row, col;
    printf("\nPlayer2! which (row, column) you wish to enter disc: ");
    scanf("%d  %d", &row, &col);

    board[row][col] = 'o';

   printf("\n---------------x Grid x---------------\n\n");
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            printf("%c", board[i][j]);
        }
        printf("\n");
    }

    //Win Check Horizontal
    for(int i=0; i<7; i+=2){
        if(board[i][0] == 'o' && board[i][2] == 'o' && board[i][4] == 'o' && board[i][6] == 'o'){
            printf("\nPlayer2 Wins!");
            exit(0);
        }
    }

    //Win check vertical
    for(int i=0; i<7; i+=2){
        if(board[0][i] == 'o' && board[2][i] == 'o' && board[4][i] == 'o' && board[6][i] == 'o'){
            printf("\nPlayer2 Wins!");
            exit(0);
        }
    }

    //Win Check diagonal(left -> right)
    int out = 0;
    for(int i=0;  i<7; i+=2){
        for(int j=0; j<7; j+=2){
            if(board[i][j] == 'o' && i == j){
                out++;
            }
        }
        if(out == 4){
            printf("\nPlayer2 Wins!");
            exit(0);
        }
    }

    //Win check (Right -> Left) diagonal
    int count = 0;
    for(int i=0; i<7; i+=2){
        for(int j=6; j>=0; j-=2){
            if(board[i][j] == 'o' && i+j == 6){
                count++;
            }
        }
        if(count==4){
            printf("\nPlayer2 Wins!");
            exit(0);
        }
    }
    return;
}

int main(){
    char board[7][7];
    printf("---------------x Grid x---------------\n\n");
        for(int i=0; i<7; i++){
            for(int j=0; j<7; j++){
            if(i %2 !=0 || j %2 != 0){
                    board[i][j] = '+';
            }

            else{
                board[i][j] = ' ';
            }
            printf("%c", board[i][j]);
        }
    printf("\n");
    }

    printf("\nPlayer1 your disc is:  *");
    printf("\nPlayer2 your disc is:  o");

    while(1){

    player1(board);

    printf("\n");
    player2(board);
    }
    return 0;
}