/**
 * @file p_2_4.c
 * @author Mayuresh Patel
 * @brief Tax Calculator
 * @version 0.1
 * @date 2022-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 * write a program that asks the user to enter a dolars-and-cents
 * amount, then displays the amount with 5% tax added.
 */
#include <stdio.h>

int main(void)
{
    // Declare variables
    float amount, total;
    int tax = 5;

    // Get user input
    printf("Enter your purchase amount: ");
    scanf("%f", &amount);       // Note: this line cannot be formatted using %.2f

    // Print out tax amount
    printf("Tax: %d%%\n", tax);

    // Calculate total
    total = (amount * tax / 100) + amount;

    // Print out total
    printf("Subtotal: %.2f", total);

    return 0;
}
