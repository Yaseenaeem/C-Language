#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

#define INIT_WIDTH 60
#define INIT_HEIGHT 20
#define MAX_SNAKE 200

void resetCursorAnsi() { printf("\033[H"); fflush(stdout); }
void clearScreenAnsi() { printf("\033[2J\033[H"); fflush(stdout); }

void showInstructions() {
    clearScreenAnsi();
    printf("            SNAKE GAME           \n");
    printf("========================================\n\n");
    printf("HOW TO PLAY:\n");
    printf("  - Use W A S D keys to move snake\n");
    printf("  - Press Q to quit\n\n");
    printf("GAME RULES:\n");
    printf("  - Eat fruit ($) to score\n");
    printf("  - Each fruit increases snake length and speed\n");
    printf("  - Every 7 points = level up -> board shrinks\n");
    printf("  - Snake touching wall or itself -> GAME OVER\n\n");
    printf("PRESS ANY KEY TO START...\n");
    _getch();
}

void drawGame(int width, int height,
              int snakeX[], int snakeY[], int snakeLength,
              int fruitX, int fruitY, int score, int level)
{
    printf("Score: %d    Level: %d    Length: %d\n", score, level, snakeLength);
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) putchar('#');
            else if (i == snakeY[0] && j == snakeX[0]) putchar('O');
            else {
                int printed = 0;
                for (int k = 1; k < snakeLength; k++) {
                    if (i == snakeY[k] && j == snakeX[k]) { putchar('*'); printed=1; break; }
                }
                if(!printed) { if(i==fruitY && j==fruitX) putchar('$'); else putchar(' '); }
            }
        }
        putchar('\n');
    }
}

void placeFruitRandom(int width, int height, int fruitPos[2],
                      int snakeX[], int snakeY[], int snakeLength)
{
    int tries = 0;
    while(tries < 200) {
        int fx = (rand() % (width - 2)) + 1;
        int fy = (rand() % (height - 2)) + 1;
        int onSnake = 0;
        for(int i = 0; i < snakeLength; i++){ if(snakeX[i]==fx && snakeY[i]==fy){ onSnake=1; break; } }
        if(!onSnake){ fruitPos[0]=fx; fruitPos[1]=fy; return; }
        tries++;
    }
    fruitPos[0] = width/3; fruitPos[1] = height/3;
}

int checkSelfCollision(int snakeX[], int snakeY[], int snakeLength) {
    for(int i=1;i<snakeLength;i++){ if(snakeX[0]==snakeX[i] && snakeY[0]==snakeY[i]) return 1; }
    return 0;
}

int tryShrinkBoard(int *width,int *height,int widthShrink,int heightShrink,
                   int snakeX[],int snakeY[],int snakeLength)
{
    int newWidth=(*width)-widthShrink, newHeight=(*height)-heightShrink;
    if(newWidth<20 || newHeight<10) return 0;
    for(int i=0;i<snakeLength;i++){
        if(snakeX[i]<=0 || snakeX[i]>=newWidth-1 || snakeY[i]<=0 || snakeY[i]>=newHeight-1) return 0;
    }
    *width=newWidth; *height=newHeight; return 1;
}

int main() {
    srand((unsigned int)time(NULL));
    showInstructions();

    int width=INIT_WIDTH, height=INIT_HEIGHT;
    int snakeX[MAX_SNAKE], snakeY[MAX_SNAKE], snakeLength=1;
    snakeX[0]=width/2; snakeY[0]=height/2;

    int fruitPos[2]={10,5};
    placeFruitRandom(width,height,fruitPos,snakeX,snakeY,snakeLength);

    int score=0, level=1;
    int dirX=1, dirY=0;
    int playing=1, baseSpeed=140, minSpeed=30, speed=baseSpeed;
    const int widthShrinkPerLevel=3, heightShrinkPerLevel=2;

    printf("\033[?25l"); fflush(stdout);

    while(playing) {
        resetCursorAnsi();
        drawGame(width,height,snakeX,snakeY,snakeLength,fruitPos[0],fruitPos[1],score,level);

        if(kbhit()){
            char key=_getch();
            if(key=='w'||key=='W'){dirX=0;dirY=-1;}
            else if(key=='s'||key=='S'){dirX=0;dirY=1;}
            else if(key=='a'||key=='A'){dirX=-1;dirY=0;}
            else if(key=='d'||key=='D'){dirX=1;dirY=0;}
            else if(key=='q'||key=='Q'){playing=0; break;}
        }

        for(int i=snakeLength-1;i>0;i--){ snakeX[i]=snakeX[i-1]; snakeY[i]=snakeY[i-1]; }
        snakeX[0]+=dirX; snakeY[0]+=dirY;

        if(snakeX[0]<=0 || snakeX[0]>=width-1 || snakeY[0]<=0 || snakeY[0]>=height-1){ playing=0; break; }
        if(checkSelfCollision(snakeX,snakeY,snakeLength)){ playing=0; break; }

        if(snakeX[0]==fruitPos[0] && snakeY[0]==fruitPos[1]){
            score++;
            if(snakeLength<MAX_SNAKE){ snakeLength++; snakeX[snakeLength-1]=snakeX[snakeLength-2]; snakeY[snakeLength-1]=snakeY[snakeLength-2]; }

            speed -= 20 + level;   
            if(speed<minSpeed) speed=minSpeed;

            placeFruitRandom(width,height,fruitPos,snakeX,snakeY,snakeLength);

            int newLevel=(score/7)+1;
            if(newLevel>level){
                if(tryShrinkBoard(&width,&height,widthShrinkPerLevel,heightShrinkPerLevel,snakeX,snakeY,snakeLength)){
                    level=newLevel;
                    if(fruitPos[0]<=0 || fruitPos[0]>=width-1 || fruitPos[1]<=0 || fruitPos[1]>=height-1){
                        placeFruitRandom(width,height,fruitPos,snakeX,snakeY,snakeLength);
                    }
                    clearScreenAnsi();
                    drawGame(width,height,snakeX,snakeY,snakeLength,fruitPos[0],fruitPos[1],score,level);
                    Sleep(500);
                } else level=newLevel;
            }
        }
        Sleep(speed);
    }

    printf("\033[?25h"); fflush(stdout);
    clearScreenAnsi();
    printf("Game Over! Final Score: %d\n",score);
    printf("Final Level: %d    Final Length: %d\n",level,snakeLength);
    printf("Thanks for playing.\n");

    return 0;
}
