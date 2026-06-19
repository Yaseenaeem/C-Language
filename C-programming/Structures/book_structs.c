#include <stdio.h>
#include <string.h>

int main(){

    struct book{
        char name[50];
        float price;
        int pages;
    };

    struct book one;
    strcpy(one.name, "Secret Seven");
    one.price = 500.125;
    one.pages = 50;

    printf("%s", one.name);
    return 0;


}