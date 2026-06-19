#include <stdio.h>
#include <string.h>

int main(){
    int age;
    char eyesight[10], written[10], driving[10], medical[10];
    // Age Test:
    printf("Enter Your age: ");
    scanf("%d", &age);

    if(age < 18){
        printf("Ineligible!");
        return 0; //Ends Program if ineligible
    }
    // eyesight exam
    printf("Have you passed or failed the eyesight exam?: ");
    scanf("%s", eyesight);

    if(strcmp(eyesight, "failed")==0){
        printf("You might need a prescription for glasses.");
        return 0; // Ends If eyesight exam failed
    }
    // Written Test
    printf("Have You Passed or failed your written test?: ");
    scanf("%s", written);

    if(strcmp(written, "failed")== 0){
        printf("You need to retake the written test.");
        return 0;
    }
    printf("Have you passed or failed your driving test?: ");
    scanf("%s", driving);

    if(strcmp(driving, "failed")==0){
        printf("Not Eligible!");
        return 0;
    }
    // If person passed driving Tes and >= 60 ONLY then 
    if(age >= 60){
        printf("Do you have a medical certificate?: ");
        scanf("%s", medical);
        if(strcmp(medical, "No")==0){
             printf("Ineligible.");
             return 0;
        } 
    }

    // If <60 and passed to driving test, then Eligible
    printf("Eligible!");
    return 0;

}