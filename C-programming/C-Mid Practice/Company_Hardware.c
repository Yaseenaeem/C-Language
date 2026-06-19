#include <stdio.h>


int main(){
    int key, i, new, b, binary, d1,d2,d3,d4,d5,d6,d7,d8, bitpos, place;

    printf("Enter the Key(1-255): ");
    scanf("%d", &key);

    if(key < 0 || key > 255){
        printf("Invalid Key!");
        return 0;
    }

    //a=1;
    binary = key;

  //  while(i<=8){
        if(key  & 1){
            printf("\nInternet Access");
        }
        key = key >> 1;
        if(key  & 1){
            printf("\nReport Generation");
        }
        key = key >> 1;
        if(key  & 1){
            printf("\nSoftware Development");
        }
        key = key >> 1;
        if(key  & 1){
            printf("\nAdmin Console Access");
        }
        key = key >> 1;
        if(key  & 1){
            printf("\nDataBase Write Permission");
        }
        key = key >> 1;
        if(key  & 1){
            printf("\nDatabase Read Permission");
        }
        key = key >> 1;
        if(key  & 1){
            printf("\nLab Entry");
        }
        key = key >> 1;
        if(key  & 1){
            printf("\nServer Room Access");
        }
        
        i = binary;

        d1 = i % 2;
        i /= 2;

        d2 = i % 2;
        i /= 2;

        d3 = i % 2;
        i /= 2;

        d4 = i % 2;
        i /= 2;
        
        d5 = i % 2;
        i /= 2;
        
        d6 = i % 2;
        i /= 2;
        
        d7 = i % 2;
        i /= 2;
        
        d8 = i % 2;

        printf("\nCurrent Binary is: %d%d%d%d%d%d%d%d", d8, d7, d6, d5, d4, d3, d2, d1);


        //Enable Disable
        printf("\nEnter the bit position (0-7) you want to change: ");
        scanf("%d", &bitpos);

        binary = binary ^ (1 << bitpos);
         b = binary;

        d1 = b % 2;
        b /= 2;

        d2 = b % 2;
        b /= 2;

        d3 = b % 2;
        b /= 2;

        d4 = b % 2;
        b /= 2;
        
        d5 = b % 2;
        b /= 2;
        
        d6 = b % 2;
        b /= 2;
        
        d7 = b % 2;
        b /= 2;
        
        d8 = b % 2;

        printf("\nUpdated Binary is: %d%d%d%d%d%d%d%d", d8, d7, d6, d5, d4, d3, d2, d1);

         new = binary;
         if(new  & 1){
            printf("\nInternet Access");
        }
        new = new >> 1;
        if(new & 1){
            printf("\nReport Generation");
        }
        new = new >> 1;
        if(new & 1){
            printf("\nSoftware Development");
        }
        new = new >> 1;
        if(new & 1){
            printf("\nAdmin Console Access");
        }
        new = new >> 1;
        if(new  & 1){
            printf("\nDataBase Write Permission");
        }
        new = new >> 1;
        if(new  & 1){
            printf("\nDatabase Read Permission");
        }
        new = new >> 1;
        if(new & 1){
            printf("\nLab Entry");
        }
        new = new >> 1;
        if(new  & 1){
            printf("\nServer Room Access");
            }
        
        return 0;
}