#include <stdio.h>
#include <string.h>   // For strcmp

int main() {
    float amount = 0, daily_limit = 0;
    int t_hour;   
    char country[20];
    int fraud = 0; // To check suspicious activities

    // Taking Transaction details from User
    printf("Enter transaction amount: ");
    scanf("%f", &amount);

    printf("Enter your daily transaction limit: ");
    scanf("%f", &daily_limit);

    printf("Enter country: ");
    scanf("%s", country);

    printf("Enter Transactions per hour: ");
    scanf("%d", &t_hour);

    // Daily limit Check
    if (amount > daily_limit) {
        printf("Daily limit exceeded!\n");
        fraud = 1;
    }

    // Country check 
    if ((strcmp(country, "Pakistan") != 0 && strcmp(country, "UAE") != 0)) {
        printf("Unusual transaction country!\n");
        fraud = 1;
    }

    // Frequency of transactions check 
    if (t_hour > 3) {
        printf("Suspicious! Too many transactions in one hour!\n");
        fraud = 1;
    }

    // If no suspicious activity found
    if (fraud == 0) {
        printf("Transaction is normal, you may proceed.\n");
    }

    return 0;
}
