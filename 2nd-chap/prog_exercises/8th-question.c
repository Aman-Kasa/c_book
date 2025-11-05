#include <stdio.h>

int main(void) {
    float loan, monthly_payment, interest_rate;
    float first_payment, second_payment, third_payment;

    printf("Enter the amount of loan = ");
    scanf("%f", &loan);

    printf("Enter interest rate (annual percent) = ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment = ");
    scanf("%f", &monthly_payment);

    // monthly interest rate
    float monthly_interest_rate = interest_rate / 100 / 12;

    // calculate balances
    first_payment  = (loan + loan * monthly_interest_rate) - monthly_payment;
    second_payment = (first_payment + first_payment * monthly_interest_rate) - monthly_payment;
    third_payment  = (second_payment + second_payment * monthly_interest_rate) - monthly_payment;

    // display with 2 decimal points
    printf("Balance remaining after first payment = $%.2f\n", first_payment);
    printf("Balance remaining after second payment = $%.2f\n", second_payment);
    printf("Balance remaining after third payment = $%.2f\n", third_payment);

    return 0;
}

