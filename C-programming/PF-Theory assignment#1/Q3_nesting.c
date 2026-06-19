#include <stdio.h>
#include <string.h>
int main(){
    int age;
    char eyesight[10], written[10], driving[10], medical[10];
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >= 18){
        printf("\nHave you passed eyesight tes?: ");
        scanf("%s", eyesight);
        if(strcmp(eyesight, "Yes")==0){
            printf("\nHave you passed written test?: ");
            scanf("%s", written);
            if(strcmp(written, "Yes")==0){
                printf("\nHave you passed driving test?:");
                scanf("%s", driving);
                if(strcmp(driving, "Yes")==0){
                    if(age>=60){
                        printf("\nDo you have medical certificate?: ");
                        scanf("%s", medical);
                        if(strcmp(medical, "Yes")==0){
                            printf("Eligible");
                        }
                        else{
                            printf("Not eligible");
                        }
                    }
                    else{
                        printf("Eligible");
                    }
                }
                else{
                    printf("Not eligible");
                }
            }
            else{
                printf("You need to retake the exam.");
            }
        }
        else{
            printf("You may need a prescription of glasses.");
        }
    }
    else{
        printf("Not eligible");
    }
    return 0;
}