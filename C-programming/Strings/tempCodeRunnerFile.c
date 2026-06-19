#include<stdio.h>
#include <string.h>

void encrryption(char username[][50], char password[][50]){
   for(int i =0; i<3; i++){
    for(int k =0; username[i][k] != '\0'; k++){
        username[i][k] += i;
    }
   }
//    printf("\nEncrypted Usernames Are: \n");
   for(int i =0; i<3; i++){
    printf("\nEncrypted Username for User %d is: %s", i+1, username[i]);
   }


    for(int i =0; i<3; i++){
    for(int k =0; password[i][k] != '\0'; k++){
        password[i][k] += i;
    }
}
// printf("\nEncrypted Passwords Are:\n");
    for(int i =0; i<3; i++){
    printf("\nEncrypted Password for User %d is: %s", i+1, password[i]);
    }

    return;
}

int search(char username[][50], char password[][50], char searchuser[], char searchpass[]){
    for(int i =0; searchuser[i] != '\0'; i++){
        searchuser[i] += i;
    }

    for(int k =0; searchpass[k] != '\0'; k++){
        searchpass[k] += k;
    }

    for(int j=0; j<3; j++){
        if(strcmp(searchuser, username[j]) == 0 && strcmp(searchpass, password[j])==0){
            return 1;
        }
    }
    return 0;
}

int main(){
    char username[3][50];
    char password[3][50];

    for(int i=0; i<3; i++){
        printf("\nEnter Username of User %d: ", i+1);
        scanf(" %[^\n]", username[i]);
    }

    for(int j =0; j<3; j++){
        printf("\nEnter Password of User %d: ", j+1);
        scanf(" %[^\n]", password[j]);
    }

    encrryption(username, password);

    char searchuser[50];
    char searchpass[50];
    printf("Enter The Username You Want to Search: ");
    scanf(" %[^\n]", searchuser);

    printf("Enter The Password you want to match: ");
    scanf(" %[^\n]", searchpass);

    if(search(username, password, searchuser, searchpass)){
        printf("Login Successful!");
    }
    else{
        printf("Login Failed!");
    }
    return 0;
}