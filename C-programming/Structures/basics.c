#include <stdio.h>

int main(){
    struct pokemon{  // User defined data type 
        int hp;
        int speed;
        int attack;
        char tier; //A.B.C.D....
    };

    struct pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    struct pokemon charizard;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.attack = 130;
    charizard.tier = 'S';

    printf("\nSpeed Of Pikachu is:  %d\n", pikachu.speed);

    return 0;

}