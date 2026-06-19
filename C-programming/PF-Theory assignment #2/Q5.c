#include <stdio.h>

void Encode(char message[], int n){
    int temp = 0;
    int i;
    int end = 0;


    getchar();
    printf("\nEnter message:  ");
    fgets(message, n, stdin);

    while(message[end] != '\0' && message[end] != '\n'){
        end++;
    }
    end--;
    
    for(i=0; i<end; i++, end--){
       temp = message[i];
       message[i] = message[end];
       message[end] = temp;
    }

    for(i=0; message[i] != '\0'; i++){
        message[i] = message[i] ^ (1<<2);
        message[i] = message[i] ^ (1<<5);
    }

    printf("\nEncode Message: \n");
    for(i=0; message[i] != '\0'; i++){
        printf("%c", message[i]);
    }
    return;
}


void Decode(char message[], int n){
     int temp = 0;
    int i;
    int end = 0;

    while(message[end] != '\0' && message[end] != '\n'){
        end++;
    }
    end--;

     for(i=0; message[i] != '\0'; i++){
        message[i] = message[i] ^ (1<<2);
        message[i] = message[i] ^ (1<<5);
    }

    for(i=0; i<end; i++, end--){
       temp = message[i];
       message[i] = message[end];
       message[end] = temp;
    }

    printf("\nDecoded Message: \n");
    for(i=0; message[i] != '\0'; i++){
        printf("%c", message[i]);
    }
    return;
}


int main(){
    int n, choice;

    printf("\nEnter Size of Message:  ");
    scanf("%d", &n);
    char message[n];

    while(1){
        printf("\nChoose any one from the menu: \n1. Encode message \n2. Decode message \n3. Exit \n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            Encode(message, n);
            break;

            case 2:
            Decode(message, n);
            break;

            case 3:
            printf("\nExiting Program!");
            return 0;
        }
    }
    return 0;
}