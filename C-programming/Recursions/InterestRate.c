#include <stdio.h>

void calculateRepayment(float loan, float rate, int years){
    // Base case: loan finished or no years left
    if (loan <= 0 || years == 0) {
        return;
    }

    printf("Year %d: Remaining loan: %.2f\n", years, loan);

    float installment = 30000;   // fixed yearly payment

    // Pay the installment
    loan = loan - installment;

    // Apply interest only if loan still remains
    if (loan > 0) {
        loan = loan + (loan * rate);
    }

    // Recursive call for the next year
    calculateRepayment(loan, rate, years - 1);
}

int main(){
    float loan, rate;
    int years;

    printf("Enter Loan Amount: ");
    scanf("%f", &loan);

    printf("Enter Rate of interest (e.g., enter 0.05 for 5%): ");
    scanf("%f", &rate);

    printf("Enter Years: ");
    scanf("%d", &years);

    calculateRepayment(loan, rate, years);

    return 0;
}
