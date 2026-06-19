#include <stdio.h>
#include <string.h>

void Customerinfo(char name[], int *cnic);
void inventory(int pcode[], int quantity[], int priceperstock[]);
void updatedInventory(int pcode[], int quantity[], int *usercode, int *buy_quant);
void cart(int pcode[], int quantity[], int *cartcode, int *cartquant);
void bill(int pcode[], int quantity[], int priceperstock[], int *usercode, int *buy_quant, int *Totalbill, int *finalbill);
void invoice(char name[], int *cnic, int *usercode, int *buy_quant, int *Totalbill, int *finalbill);

int main(){
    char name[50];
    int option;
    int cnic; 

    int pcode[4];
    int quantity[4];
    int priceperstock[4];

    int usercode;
    usercode = 0;
    int buy_quant;
    buy_quant = 0;
    int cartcode;
    cartcode = 0;
    int cartquant;
    cartquant = 0;

    int Totalbill = 0;
    int finalbill = 0;

    for(int i=0; i<4; i++){
        printf("\n%d product code: ", i+1);
        scanf("%d", &pcode[i]);
        printf("\nQuantity of stock %d: ", i+1);
        scanf("%d", &quantity[i]);
        printf("\nPrice of stock %d: ", i+1);
        scanf("%d", &priceperstock[i]);
    }

    while(1){
        printf("\nChoose an option (1-6): \n1. Customer Information \n2. Display Inventory \n3. Update Inventory \n4. Add Item to Cart \n5. Display Total bill \n6. Show Invoice \n7. Exit ");
        scanf("%d", &option);
        switch(option){
            case 1:
            cnic = 0;
            Customerinfo(name, &cnic);
            break;

            case 2:
            inventory(pcode, quantity, priceperstock);
            break;

            case 3:
            updatedInventory(pcode, quantity, &usercode, &buy_quant);
            break;

            case 4:
            cart(pcode, quantity, &cartcode, &cartquant);
            break;

            case 5:
            bill(pcode, quantity, priceperstock, &usercode, &buy_quant, &Totalbill, &finalbill);
            break;

            case 6:
            invoice(name, &cnic, &usercode, &buy_quant, &Totalbill, &finalbill);
            break;

            case 7:
            printf("\nProgram Is Ended.");
            return 0;
        }
    }
    return 0;
}

void Customerinfo(char name[], int *cnic){

    printf("\nEnter Your first Name: ");
    scanf("%s", name);

    printf("\nEnter Your CNIC number: ");
    scanf("%d", cnic);

    return;
}

void inventory(int pcode[], int quantity[], int priceperstock[]){
    

    printf("\nProduct Code\t\tQuantity In Stock\t\tPrice per stock");
    for(int i=0; i<4; i++){
        printf("\n%d\t\t\t\t%d\t\t\t\t%d\n", pcode[i], quantity[i], priceperstock[i]);
    }
    return;
}

void updatedInventory(int pcode[], int quantity[], int *usercode, int *buy_quant){
    
    int found, m;
    found = 0;
    m = 0;

    printf("\nEnter The Product Code for Item you want to Buy: ");
    scanf("%d", usercode);

    printf("\nEnter The Quantity for Item you want to Buy: ");
    scanf("%d", buy_quant);

    for(int i =0; i<4; i++){
        if(pcode[i] == *usercode){
            found = 1;
            m = i;
            break;
        }
    }
    
    if(!found){
        printf("\nEnter valid Product Code.");
        return;
    }

    if(*buy_quant > quantity[m]){
        printf("\nNot enough stock!");
        return;
    }
    else{ quantity[m] = quantity[m] - *buy_quant;
        printf("\nRemaining Quantity for %d is only %d!", pcode[m], quantity[m]);
    }
    return;
}

void cart(int pcode[], int quantity[], int *cartcode, int *cartquant){
    
    int found, m; 
    found = 0;
    m = 0;

    printf("\nAdd Item To Cart. (Enter Code): ");
    scanf("%d", cartcode);

    printf("\nEnter The Quantity: ");
    scanf("%d", cartquant);

    for(int i =0; i<4; i++){
        if(pcode[i] == *cartcode){
            found = 1;
            m = i;
            break;
        }
    }
    
    if(!found){
        printf("\nEnter valid Product Code.");
        return;
    }
    else{
        quantity[m] = quantity[m] - *cartquant;
        printf("\nRemaining Quantity for %d is only %d!", pcode[m], quantity[m]);
    }
    return;
}

void bill(int pcode[], int quantity[], int priceperstock[], int *usercode, int *buy_quant, int *Totalbill, int *finalbill){

    int b;
    char voucher[10];

    for(int l =0; l<4; l++){
        if(pcode[l] == *usercode){
            b=l;
            break;
        }
    }

    *Totalbill = priceperstock[b] * (*buy_quant);
    printf("\n Your Total Totalbill is: %d", *Totalbill);

    printf("\nWe are offering Promo Code of Eid2025. Do you have a voucher?");
    scanf("%s",voucher);
    if(strcmp(voucher, "Yes")==0){
        *finalbill = (*Totalbill)*0.75;
        printf("\nYour Final Totalbill is: %d", *finalbill);
    }
    else{
        *finalbill = *Totalbill;
        printf("\nYour final Totalbill is: %d", *finalbill);
    }
    return;
}

void invoice(char name[], int *cnic, int *usercode, int *buy_quant, int *Totalbill, int *finalbill){

    printf("\nName\t\tCNIC\t\tProduct Code\t\t\tQuantity\t\tTotal Totalbill\t\tFinal Totalbill\n");
    printf("%s\t\t%d\t\t%d\t\t\t\t%d\t\t\t%d\t\t\t%d", name, *cnic, *usercode, *buy_quant, *Totalbill, *finalbill);
    return;
}

