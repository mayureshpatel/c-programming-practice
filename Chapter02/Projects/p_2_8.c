/**
 * @file p_2_8.c
 * @author Mayuresh Patel
 * @brief Loan Calculations
 * @version 0.1
 * @date 2022-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that caculates the remaining balance on a loan after the first,
 * second, and third monthly payments:
 * 
 *      Enter amount of loan: 20000.00
 *      Enter interest rate: 6.0
 *      Enter monthly payment: 386.66
 * 
 *      Balance remaining after first payment: $19713.34
 *      Balance remaining after second payment: $19425.25
 *      Balance remaining after third payment: $19135.71
 * 
 * Display each balance with two digits after the decimal point.
 * 
 * Hint: Each month, the balance is decreased by the amount of the payment,
 * but increased by the balance times the monthly interest rate. To find
 * the monthly interest rate, convert the interest rate entered by the
 * user to a percentage and divide it by 12.
 */
#include <stdio.h>

int main(void)
{
    // Declare variables
    float loanPrinciple, interestRate, monthlyPayment;
    float interestPayment, principlePayment;

    // Get user input
    printf("Enter amount of loan: ");
    scanf("%f", &loanPrinciple);

    printf("Enter interest rate: ");
    scanf("%f", &interestRate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    // Calculate remaining balance
    interestPayment = (loanPrinciple * interestRate / 100.0f) / 12;
    principlePayment = monthlyPayment - interestPayment;
    loanPrinciple = loanPrinciple - principlePayment;
    printf("\nBalance remaining after first payment: $%.2f\n", loanPrinciple);

    // Same calculation but simplified and in-line
    loanPrinciple = loanPrinciple - (monthlyPayment - (loanPrinciple * interestRate / 100) / 12);
    printf("Balance remaining after second payment: $%.2f\n", loanPrinciple);

    loanPrinciple = loanPrinciple - (monthlyPayment - (loanPrinciple * interestRate / 100) / 12);
    printf("Balance remaining after third payment: $%.2f\n", loanPrinciple);

    return 0;
}