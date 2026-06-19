#include <stdio.h>
#include <string.h>

int main(){
    char pass[50];
    char user[100];

    printf("Enter Username: ");
    scanf(" %[^\n]", user);

    printf("\nEnter Your Password. Password must be > than 7 and include special characters:  \n");
    scanf(" %[^\n]", pass);

    int len = strlen(pass);
    char hash = '#';
    char rate = '@';
    if(len > 7){
        if(strchr(pass, hash) || strchr(pass, rate)){
            if(strcmp(pass, user)!=0){
                printf("Password Valid!");
            }
            else{
                printf("Password Matches Username.");
            }
        }
        else{
            printf("No Special Characters.");
        }
    }
    else{
        printf("Password length less than 8 characters.");
    }
    return 0;
}