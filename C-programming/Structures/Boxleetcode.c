#include <stdio.h>

typedef struct box{
    int length;
    int width;
    int height;
} box;

int main(){
    int n;
    int tunnel = 41;
    printf("Enter number of boxes: ");
    scanf("%d", &n);
    box box[n];

    for(int i =0; i<n; i++){
    printf("\nEnter length of Box %d:  ", i+1);
    scanf("%d", &box[i].length);

    printf("\nEnter width of Box %d:  ", i+1);
    scanf("%d", &box[i].width);

    printf("\nEnter height of Box %d:  ", i+1);
    scanf("%d", &box[i].height);
    }

    for(int j =0; j<n; j++){
        printf("%d\t%d\t%d\n", box[j].length, box[j].width, box[j].height);
    }
    printf("\n");
    int volume;
        for(int i =0; i<n; i++){
            volume = 0;
            if(box[i].height< tunnel){
            volume = box[i].length * box[i].width * box[i].height;
            printf("%d\n", volume);
        }
    }

    return 0;
}