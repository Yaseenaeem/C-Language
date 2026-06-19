#include <stdio.h>
#include <string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[50];
    } pokemon;

    pokemon arr[3];
    strcpy(arr[0].name, "Pikachu");
    arr[0].hp = 50;
    arr[0].attack = 75;
    arr[0].speed = 100;
    arr[0].tier = 'A';

    strcpy(arr[1].name, "Charizard");
    arr[1].hp = 150;
    arr[1].attack = 175;
    arr[1].speed = 200;
    arr[1].tier = 'B';

    strcpy(arr[2].name, "Newtow");
    arr[2].hp = 250;
    arr[2].attack = 275;
    arr[2].speed = 1000;
    arr[2].tier = 'C';

    for(int i =0; i<3; i++){
        printf("\n%s", arr[i].name);
        printf("\n%d", arr[i].hp);
        printf("\n%d", arr[i].attack);
        printf("\n%d", arr[i].speed);
        printf("\n%c", arr[i].tier);

        printf("\n");
    }
    return 0;
}