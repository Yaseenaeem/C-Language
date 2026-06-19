#include <stdio.h>

float calculateRepayment(float loan, float interestRate, int years) {

    if (loan <= 0 || years == 0) {
        return 0;  
    }

    loan = loan + (loan * interestRate);

    float installment = 30000;  
    float paidThisYear;
    if (loan < installment)
        paidThisYear = loan;    
    else
        paidThisYear = installment;

    loan = loan - paidThisYear;

    printf("Year %d: Remaining loan = %.2f\n", years, loan);

    float remainingPayments = calculateRepayment(loan, interestRate, years - 1);

    return paidThisYear + remainingPayments;
}

int main() {
    float loan = 100000;
    float interestRate = 0.05;
    int years = 3;

    float total = calculateRepayment(loan, interestRate, years);

    printf("\nTotal repayment in %d years = %.2f\n", years, total);

    return 0;
}
