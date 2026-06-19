#include<stdio.h>
#include<string.h>

int main(){
    char fname[50];
    char lname[50];

    printf("Enter first name: ");
    scanf(" %[^\n]", fname);
    printf("\nEnter Last name: ");
    scanf(" %[^\n]", lname);

    int lenf = strlen(fname);
    int lenl = strlen(lname);
    char lastn[]="Ali";
    char vp[] = " (VIP)";
    if(strstr(lname, lastn)){
        strcat(lname, " (VIP)");
        printf("Hello %s %s!", fname, lname);
    }
    else{
    printf("\nHello %s %s!", fname, lname);
    }

    char nickname[5];
    nickname[0] = fname[0];
    nickname[1] = fname[1];
    nickname[2]= lname[lenl-3];
    nickname[3] = lname[lenl-2];
    nickname[4] = lname[lenl-1];
    nickname[5] = '\0';

    printf("\nYour nickname is: %s", nickname);
    return 0;
}