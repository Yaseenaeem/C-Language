#include <stdio.h>
#include <string.h>

void stockreport(int isbns[], char title[][50], float price[], int quantity[], int count){

    printf("\nISBN\t\tTitle\t\tPrice\t\tQuantity");
    for(int l=0; l<count; l++){
        if(quantity[l] < 5){
            printf("\n%d\t\t%s\t\t%.2f\t\t%d\n", isbns[l], title[l], price[l], quantity[l]);
        }
    }
    return;
}

void saleprocess(int isbns[], char title[][50], float price[], int quantity[], int count){
    int userisbn, k, copies_sold, updated_quantity, m, found;
    found = 0;
    m = 0;

    printf("\nEnter the isbn number: ");
    scanf("%d", &userisbn);

    printf("\nEnter the copies for the book sold: ");
    scanf("%d", &copies_sold);

    for(k=0; k < count; k++){
        if(isbns[k] == userisbn){
           found = 1;
           m = k;
            break;
        }
    }
    if(!found){
        printf("\nBook Not Found.");
        return;
    }

   if(copies_sold > quantity[m]){
    printf("\nBook is Out-Of-Stock.");
   }
   else{
   updated_quantity = quantity[m] - copies_sold;
   quantity[m] = updated_quantity;

    printf("\nThe Quantity now for %d is only %d", userisbn, quantity[m]);
   }   
   return;
}

void newbook(int isbns[], char title[][50], float price[], int quantity[], int*count){
  
    int j, duplicate, new_isbn, new_quantity;
    char new_title[50];
    float new_price;

    printf("\nEnter New Book ISBN: ");
    scanf("%d", &new_isbn);

    duplicate = 0;
    for(j=0; j<*count; j++){
        if(isbns[j] == new_isbn){
            duplicate =1;
            break;
        }
    }
    if(duplicate){
        printf("\nISBN already exist!");
        return;
    }
    else{
        isbns[*count] = new_isbn;
        printf("\nNew ISBN %d successfully added.", new_isbn);
    }

    printf("\nEnter New Book title: ");
    scanf("%s", new_title);
    strcpy(title[*count], new_title);

    printf("\nEnter price for new Book:  ");
    scanf("%f",&new_price);
    price[*count] = new_price;

    printf("\nEnter new Book Quantity: ");
    scanf("%d", &new_quantity);
    quantity[*count] = new_quantity;

    (*count)++;

    return;
}

int main(){
    int isbns[100];
    char title[100][50];
    float price[100];
    int quantity[100];
    int count = 5; //initially storing 5 books
    // count is tracker for number of books

    printf("Enter ISBN numbers for the books: ");
    for(int i=0; i<5; i++){
        printf("\nBook %d: ",i+1);
        scanf("%d", &isbns[i]);
    }

    printf("\nEnter Book titles: ");
    for(int i=0; i<5; i++){
        printf("\nBook %d is: ", i+1);
       // for(int j=0; j<3; j++){
        scanf("%s", title[i]);
        
    }

    printf("\nThe Prices for books are: ");
    for(int i=0; i<5; i++){
        printf("\nPrice Book %d is: ", i+1);
        scanf("%f", &price[i]);
    }

    printf("\nQuantities for Books are: ");
    for(int i=0; i<5; i++){
        printf("\nQuantity Book %d is: ", i+1);
        scanf("%d", &quantity[i]);
    }

    printf("\n-----------Data Storage-------");
    printf("\nISBN\t\tTitles\t\tPrices\t\tQuantity\n");
    for(int i=0; i<5; i++){
        printf("\n%d\t\t%s\t\t%.2f\t\t%d ", isbns[i], title[i], price[i], quantity[i]);
    }


    int option;
    while(1){
    printf("\n\nChoose 1 option (1-4) from main-menu: \n1. Add A New-Book \n2. Process A Sale \n3. Generate Low-Stock report \n4. Exit Programm: ");
    scanf("%d", &option);
    switch(option){
        case 1:
        newbook(isbns, title, price, quantity, &count);
        break;

        case 2:
        saleprocess(isbns, title, price, quantity, count);
        break;

        case 3:
        stockreport(isbns, title, price, quantity, count);
        break;

        case 4:
        printf("\nProgramm Ended.");
        return 0;
    }
    }
    return 0;
}