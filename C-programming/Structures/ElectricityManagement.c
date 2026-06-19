#include <stdio.h>

typedef struct dailyconsumption{
    int day;
    int units;
} dailycon;

typedef struct ElectricityBill{
    char name[50];
    int id;
    dailycon daily[30];
} Ebill;

typedef struct BillingTier billingTiers[] = {
{0.10, 50.0}, // Rate for the first 50 units
{0.15, 100.0}, // Rate for the next 50 units
{0.20, -1.0} // Rate for any units beyond 100 (unlimited)
} Billtier;

int main(){
    Ebill Bill;
    
}