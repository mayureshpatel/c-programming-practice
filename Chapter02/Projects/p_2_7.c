/**
 * @file p_2_7.c
 * @author Mayuresh Patel
 * @brief Payment Dollar Denominations Calculator
 * @version 0.1
 * @date 2022-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that asks the user to enter a U.S. dollar amount
 * and then shows how to pay that amount using the smallest number
 * of $20, $10, $5, and $1 bills:
 * 
 *      Enter a dollar amount: 93
 * 
 *      $20 bills: 4
 *      $10 bills: 1
 *       $5 bills: 0
 *       $1 bills: 3
 */
#include <stdio.h>

int main(void)
{
    // Declare variables
    int dollarAmount, twentyBill, tenBill, fiveBill, oneBill;

    // Get user input
    printf("Enter dollar amount: ");
    scanf("%d", &dollarAmount);

    // Calculate bills and print out amounts
    twentyBill = dollarAmount / 20;
    dollarAmount = dollarAmount - (twentyBill * 20);
    printf("$20 bills: %d\n", twentyBill);

    tenBill = dollarAmount / 10;
    dollarAmount = dollarAmount - (tenBill * 10);
    printf("$10 bills: %d\n", tenBill);

    fiveBill = dollarAmount / 5;
    dollarAmount = dollarAmount - (fiveBill * 5);
    printf("$5 bills: %d\n", fiveBill);

    oneBill = dollarAmount;
    printf("$1 bills: %d\n", oneBill);

    return 0;
}
