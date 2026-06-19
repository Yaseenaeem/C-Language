#include <stdio.h>
int main(){
    int i, j, choice;
    char letters[4][4] = {{'a', 'b', 'c', 'd'},
                        {'e', 'f' , 'g', 'h'},
                        {'i', 'j', 'k', 'l'},
                        {'m', 'n', 'o', 'p'}};
    
    while(1){
        printf("\nEnter Your choice; \n1. Left \n2. Right \n3. Up \n4. Down\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            for(i=0; i<4; i++){
            char temp = letters[i][0];
                for(j=0; j<3; j++){
                    letters[i][j] = letters[i][j+1];
                }
                letters[i][3] = temp;
            }
            for(i=0; i<4; i++){
                for(j=0; j<4; j++){
                    printf("%c ", letters[i][j]);
                }
                printf("\n");
            }
            break;

            case 2:
            for(i=0; i<4; i++){
                char temp = letters[i][3];
                for(j=3; j>0; j++){
                    letters[i][j] = letters[i][j-1];
                }
                letters[i][0] = temp;
            }

            for(i=0; i<4; i++){
                for(j=0; j<4; j++){
                    printf("%c ", letters[i][j]);
                }
                printf("\n");
            }
            break;

            case 3:
            for(j=0; j<4; j++){
                char temp = letters[0][j];
                for(i=0; i<3; i++){
                    letters[i][j] = letters[i+1][j];
                }
                letters[3][j] = temp;
            }

            for(i=0; i<4; i++){
                for(j=0; j<4; j++){
                    printf("%c ", letters[i][j]);
                }
                printf("\n");
            }
            break;

            case 4:
            for(j=0; j<4; j++){
                char temp = letters[3][j];
                for(i=3; i>0; i++){
                    letters[i][j] = letters[i-1][j];
                }
                letters[0][j] = temp;
            }
        
        for(i=0; i<4; i++){
                for(j=0; j<4; j++){
                    printf("%c ", letters[i][j]);
                }
                printf("\n");
            }
            break;

        }
    }
    return 0;
}